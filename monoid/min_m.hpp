template<class T>
struct min_m {
	using type=T;
	static constexpr T op(const T& a, const T& b) { return std::min(a,b); }
	static constexpr T e=std::numeric_limits<T>::max();
};
