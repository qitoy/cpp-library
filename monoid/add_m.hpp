template<class T>
struct add_m {
	using type=T;
	static constexpr T op(const T& a, const T& b) { return a+b; }
	static constexpr T e=0;
};
