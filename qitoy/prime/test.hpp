/*{{{ prime_test */
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
/*}}}*/
