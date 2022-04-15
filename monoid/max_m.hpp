#include <algorithm>
#include <limits>

template<class T>
struct max_m {
	using type=T;
	static constexpr T op(const T& a, const T& b) { return std::max(a,b); }
	static constexpr T e=std::numeric_limits<T>::min();
};
