template<int mod>
struct mod_m {
	using type=int;
	static constexpr int op(int a, int b) {
		return (a+b)%mod;
	}
	static constexpr int e() { return 0; }
};
