#pragma once 

#include<vector>
#include<algorithm> // sort, min
#include<numeric> // gcd
#include<random> // mt19937_64

namespace qitoy {

	using i32 = int;
	using i64 = long long;
	using i128 = __int128;

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

		std::vector<i64> factor(i64 a) {
			if(a==1) return {};
			std::vector<i64> vec; std::vector<i64> ans;
			vec.push_back(a);
			std::mt19937_64 rnd;
			while(!vec.empty()) {
				i64 N=vec.back();
				vec.pop_back();
				if(test(N)) {
					ans.push_back(N);
					continue;
				}
				if(N%2==0) {
					ans.push_back(2);
					vec.push_back(N/2);
					continue;
				}
				i64 x,y,g,c,r,q,ys;
				const i64 m=128;
				auto f=[&](i64 X){ return ((i128)X*X%N+c)%N; };
				do {
					y=rnd()%(N+1); c=rnd()%(N-1)+1; g=r=q=1;
					do {
						x=y;
						for(i32 i=0; i<r; i++) y=f(y);
						i64 k=0;
						do {
							ys=y;
							for(i32 i=0; i<std::min(m,r-k); i++) {
								y=f(y);
								q=(i128)q*std::abs(x-y)%N;
							}
							g=std::gcd(q,N);
							k+=m;
						} while(k<r&&g==1);
						r<<=1;
					} while(g==1);
					if(g==N) do {
						ys=f(ys);
						g=std::gcd(std::abs(x-ys),N);
					} while(g==1);
				} while(g==N);
				vec.push_back(g); vec.push_back(N/g);
			}
			std::sort(ans.begin(),ans.end());
			return ans;
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
