#pragma once 

#include<vector>
#include<algorithm> // sort, min
#include<cmath> // abs, sqrt, cbrt
#include<numeric> // gcd
#include"atcoder/fenwicktree" 

namespace qitoy {

	namespace {

		using i32 = int;
		using i64 = long long;
		using u64 = unsigned long long;
		using i128 = __int128;

		u64 rnd() { // Xorshift
			static u64 x=88172645463325252ULL;
			x=x^(x<<7);
			return x=x^(x>>9);
		}

		i64 findfactor(i64 N) {
			if(N%2==0) return 2;
			// Pollard's rho algorithm, improved by Brent
			i64 G=1;
			do {
				i64 x,y=rnd()%(N-1)+1,q=1,ys,c=rnd()%(N-1)+1; i32 r=1,k;
				auto f=[&](i64 X){return ((i128)X*X+c)%N;};
				constexpr i32 m=128;
				do {
					x=y;
					for(i32 i=0; i<r; i++) y=f(y);
					k=0;
					do {
						ys=y;
						for(i32 i=0; i<std::min(m,r-k); i++) {
							y=f(y); q=(i128)q*std::abs(x-y)%N;
						}
						G=std::gcd(q,N); k+=m;
					} while(k<r and G==1); r<<=1;
				} while (G==1);
					if(G==N) do {
						ys=f(ys); G=std::gcd(std::abs(x-ys),N);
					} while(G==1);
			} while(G==N);
			return G;
		}

	} // namespace

	constexpr bool prime_test(const i64 N) { // Miller-Rabin test
		if(N<=2) return N==2;
		if(N%2==0) return false;
		i64 d=N-1;
		i32 r=0;
		while(d%2==0) {d>>=1; r++;}
		for(i64 a : {2, 325, 9375, 28178, 450775, 9780504, 1795265022}) { // ?
			if(std::gcd(N,a)!=1) continue;
			i64 x=1;
			for(i64 t=d; t; t>>=1) { // x=a^d mod N
				if(t%2==1) x=(i128)x*a%N;
				a=(i128)a*a%N;
			}
			if(x==1 or x==N-1) continue;
			for(i32 i=0; i<r; i++) {
				x=(i128)x*x%N;
				if(x==N-1) break;
				if(x==1 or i==r-1) return false;
			}
		}
		return true;
	}

	std::vector<i64> factorize(i64 N) {
		if(N==1) return {};
		std::vector<i64> vec={N};
		for(std::size_t i=0; i<vec.size();) {
			if(prime_test(vec[i])) {i++; continue;}
			i64 d=findfactor(vec[i]);
			vec[i]/=d; vec.push_back(d);
		}
		std::sort(vec.begin(), vec.end());
		return vec;
	}

	std::vector<bool> prime_sieve(i32 N) {
		std::vector<bool> _isPrime(N+1, true);
		_isPrime[0]=_isPrime[1]=false;
		for(i32 i=4; i<=N; i+=2) _isPrime[i]=false;
		for(i32 i=3; i*i<=N; i+=2) if(_isPrime[i]) 
			for(i32 j=i; i*j<=N; j+=2) _isPrime[i*j]=false;
		return _isPrime;
	}

	i64 prime_pi(i64 N) { // ref : Meissel–Lehmer algorithm
		i32 a=std::cbrt(N), b=std::sqrt(N), c=N/a;
		std::vector<i32> f(a+1, 1<<30), mu(a+1,1), P;
		for(i32 i=2; i<=a; i++) if(f[i]==1<<30) { // initial preprocessing 
			f[i]=i;
			P.push_back(i);
			for(i32 j=1; i*j<=a; j++) {
				f[i*j]=std::min(f[i*j],i);
				mu[i*j]*=j%i==0?0:-1;
			}
		}
		i32 pia=P.size();
		i64 ret=pia-1;
		for(i32 i=1; i<=a; i++) ret+=mu[i]*(N/i); // ordinary leaves
		std::vector<bool> S(c+1,true);
		S[0]=S[1]=false;
		atcoder::fenwick_tree<i32> phi(c+1);
		for(i32 i=0; i<pia; i++) { // special leaves
			for(i32 j=P[i]+1; j<=a; j++) {
				if(f[j]>P[i] && j*P[i]>a)
					ret+=-mu[j]*(N/(j*P[i])-phi.sum(0,N/(j*P[i])+1));
			}
			phi.add(P[i],1);
			S[P[i]]=false;
			for(i32 j=P[i]; P[i]*j<=c; j++) {
				if(S[P[i]*j]) phi.add(P[i]*j,1);
				S[P[i]*j]=false;
			}
		}
		for(i32 i=a+1; i<=b; i++) if(S[i]) P.push_back(i);
		i64 pib=P.size(), pix=P.size();
		for(i32 i=pib, j=b+1; i-->pia;) { // P_2
			for(; j<=N/P[i]; j++) if(S[j]) pix++;
			ret-=pix;
		}
		ret+=-pia*(pia-1)/2+pib*(pib-1)/2;
		return ret;
	}

} // namespace qitoy
