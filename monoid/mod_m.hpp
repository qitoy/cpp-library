template<int mod>
struct mod_m {
	using type=int;
	static constexpr int op(const int a, const int b) {
		return (a+b)%mod;
	}
	static constexpr int e=0;
};
