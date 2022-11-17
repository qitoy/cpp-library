#include <algorithm>
#include <limits>

template<class T>
struct min_m {
	using type=T;
	static constexpr T op(T a, T b) { return std::min(a,b); }
	static constexpr T e() { return std::numeric_limits<T>::max(); }
};
