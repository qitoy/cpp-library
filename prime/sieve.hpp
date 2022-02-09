std::vector<bool> prime_sieve(int N) {
	std::vector<bool> _isPrime(N+1, true);
	_isPrime[0]=_isPrime[1]=false;
	for(int i=4; i<=N; i+=2) _isPrime[i]=false;
	for(int i=3; i*i<=N; i+=2) if(_isPrime[i]) 
		for(int j=i; i*j<=N; j+=2) _isPrime[i*j]=false;
	return _isPrime;
}
