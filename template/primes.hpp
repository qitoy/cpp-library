#pragma once 

#include<vector>
#include<algorithm> // sort, min
#include<cmath> // abs
#include<numeric> // gcd

namespace qitoy {

	using i32 = int;
	using i64 = long long;
	using u64 = unsigned long long;
	using i128 = __int128;
	
	namespace internal {

		u64 rnd() { // Xorshift
			static u64 x=88172645463325252ULL;
			x=x^(x<<7);
			return x=x^(x>>9);
		}

		i64 findfactor(i64 N) {
			if(N%2==0) return 2;
			// rho algorithm by Pollard and Brent
			i64 G=1;
			do {
				i64 x0=rnd()%(N-1)+1, c=rnd()%(N-1)+1;
				i64 y=x0, q=1, x,ys; i32 r=1; constexpr i32 m=128;
				auto f=[&](i64 X){return ((i128)X*X+c)%N;};
				do {
					x=y;
					for(i32 i=0; i<r; i++) y=f(y);
					i32 k=0;
					do {
						ys=y;
						for(i32 i=0; i<std::min(m,r-k); i++) {
							y=f(y); q=(i128)q*std::abs(x-y)%N;
						}
						G=std::gcd(q,N); k+=m;
						r<<=1;
					} while(k<r and G==1);
				} while(G==1);
				if(G==N) do {ys=f(ys); G=std::gcd(abs(x-ys),N);} while(G==1);
			} while(G==N);
			return G;
		}

	} // namespace internal

	namespace primes {

		constexpr bool test(const i64 N) { // Miller-Rabin test
			if(N<=2) return N==2;
			if(N%2==0) return false;
			i64 d=N-1;
		   	i32 r=0;
			while(d%2==0) {d>>=1; r++;}
			for(i64 a : {2,3,5,7,11,13,17,19,23,29,31,37}) { // A014233 - OEIS
				if(N<=a) break;
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
				if(test(vec[i])) {i++; continue;}
				i64 d=internal::findfactor(vec[i]);
				vec[i]/=d; vec.push_back(d);
			}
			std::sort(vec.begin(), vec.end());
			return vec;
		}

		std::vector<bool> sieve(i32 N) {
			std::vector<bool> _isPrime(N+1, true);
			_isPrime[0]=_isPrime[1]=false;
			for(i32 i=4; i<=N; i+=2) _isPrime[i]=false;
			for(i32 i=3; i*i<=N; i+=2) if(_isPrime[i]) 
				for(i32 j=i; i*j<=N; j+=2) _isPrime[i*j]=false;
			return _isPrime;
		}

		// i64 pi(i64 N) { } 

	} // namespace primes

} // namespace qitoy
