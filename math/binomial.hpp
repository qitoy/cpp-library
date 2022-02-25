template<int mod=1000000007>
struct binomial {
	public:
		explicit binomial(std::size_t n)
			: _n(n), _fac(n+1), _inv(n+1), _finv(n+1) {
			_fac[0]=_fac[1]=_finv[0]=_finv[1]=_inv[1]=1;
			for (int i = 2; i <= _n; i++) {
				_fac[i]=(long long)_fac[i-1]*i%mod;
				_inv[i]=mod-(long long)_inv[mod%i]*(mod/i)%mod;
				_finv[i]=(long long)_finv[i-1]*_inv[i]%mod;
			}
		}

		int calc(int n, int k) {
			if(n<k or n<0 or k<0) return 0;
			assert(n<=_n);
			return (long long)_fac[n]*((long long)_finv[k]*_finv[n-k]%mod)%mod;
		}

	private:
		std::size_t _n;
		std::vector<int> _fac, _inv, _finv;
};
