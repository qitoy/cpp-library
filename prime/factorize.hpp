#include "test.hpp"

long long findfactor(long long N) {
	if(N%2==0) return 2;
	// Pollard's rho algorithm, improved by Brent
	long long G=1;
	std::mt19937_64 rnd;
	do {
		long long x,y=rnd()%(N-1)+1,q=1,ys,c=rnd()%(N-1)+1; int r=1,k;
		auto f=[&](long long X){return ((__int128)X*X+c)%N;};
		constexpr int m=128;
		do {
			x=y;
			for(int i=0; i<r; i++) y=f(y);
			k=0;
			do {
				ys=y;
				for(int i=0; i<std::min(m,r-k); i++) {
					y=f(y); q=(__int128)q*std::abs(x-y)%N;
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

std::vector<long long> factorize(long long N) {
	if(N==1) return {};
	std::vector<long long> vec={N};
	for(std::size_t i=0; i<vec.size();) {
		if(prime_test(vec[i])) {i++; continue;}
		long long d=findfactor(vec[i]);
		vec[i]/=d; vec.push_back(d);
	}
	std::sort(vec.begin(), vec.end());
	return vec;
}
