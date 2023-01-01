template<class T>
struct add_m {
	using type=T;
	static constexpr T op(T a, T b) { return a+b; }
	static constexpr T e() { return 0; }
};
