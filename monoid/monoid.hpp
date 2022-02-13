template<class T>
struct add_m {
	using type=T;
	static T op(T a, T b) { return a+b; }
	static constexpr T e=0;
};

template<class T>
struct min_m {
	using type=T;
	static T op(T a, T b) { return std::min(a,b); }
	static constexpr T e=std::numeric_limits<T>::max();
};
