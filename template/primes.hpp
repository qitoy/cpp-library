// {{{ prime_test

constexpr bool prime_test(const long long N) { // Miller-Rabin test
	if(N<=2) return N==2;
	if(N%2==0) return false;
	long long d=N-1;
	int r=0;
	while(d%2==0) {d>>=1; r++;}
	for(long long a : {2, 325, 9375, 28178, 450775, 9780504, 1795265022}) {
		if(a%N==0) return true;
		long long x=1;
		for(long long t=d; t; t>>=1) { // x=a^d mod N
			if(t%2==1) x=(__int128)x*a%N;
			a=(__int128)a*a%N;
		}
		if(x==1 or x==N-1) continue;
		for(int i=0; i<r; i++) {
			x=(__int128)x*x%N;
			if(x==N-1) break;
			if(x==1 or i==r-1) return false;
		}
	}
	return true;
}

// }}} prime_test

// {{{ factorize

long long findfactor(long long N) {
	if(N%2==0) return 2;
	// Pollard's rho algorithm, improved by Brent
	long long G=1;
	std::mt19937_64 rnd();
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

// }}} factorize

// {{{ prime_sieve

std::vector<bool> prime_sieve(int N) {
	std::vector<bool> _isPrime(N+1, true);
	_isPrime[0]=_isPrime[1]=false;
	for(int i=4; i<=N; i+=2) _isPrime[i]=false;
	for(int i=3; i*i<=N; i+=2) if(_isPrime[i]) 
		for(int j=i; i*j<=N; j+=2) _isPrime[i*j]=false;
	return _isPrime;
}

// }}} prime_sieve

// {{{ prime_pi

long long prime_pi(long long N) { // ref : Meissel–Lehmer algorithm
	int a=std::cbrt(N), b=std::sqrt(N), c=N/a;
	std::vector<int> f(a+1, 1<<30), mu(a+1,1), P;
	for(int i=2; i<=a; i++) if(f[i]==1<<30) { // initial preprocessing 
		f[i]=i;
		P.push_back(i);
		for(int j=1; i*j<=a; j++) {
			f[i*j]=std::min(f[i*j],i);
			mu[i*j]*=j%i==0?0:-1;
		}
	}
	int pia=P.size();
	long long ret=pia-1;
	for(int i=1; i<=a; i++) ret+=mu[i]*(N/i); // ordinary leaves
	std::vector<bool> S(c+1,true);
	S[0]=S[1]=false;
	atcoder::fenwick_tree<int> phi(c+1);
	for(int i=0; i<pia; i++) { // special leaves
		for(int j=P[i]+1; j<=a; j++) {
			if(f[j]>P[i] && j*P[i]>a)
				ret+=-mu[j]*(N/(j*P[i])-phi.sum(0,N/(j*P[i])+1));
		}
		phi.add(P[i],1);
		S[P[i]]=false;
		for(int j=P[i]; P[i]*j<=c; j++) {
			if(S[P[i]*j]) phi.add(P[i]*j,1);
			S[P[i]*j]=false;
		}
	}
	for(int i=a+1; i<=b; i++) if(S[i]) P.push_back(i);
	long long pib=P.size(), pix=P.size();
	for(int i=pib, j=b+1; i-->pia;) { // P_2
		for(; j<=N/P[i]; j++) if(S[j]) pix++;
		ret-=pix;
	}
	ret+=-pia*(pia-1)/2+pib*(pib-1)/2;
	return ret;
}

// }}} prime_pi
