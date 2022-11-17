#include <utility>

template<class M, class N>
class maybe {
	using T=std::pair<typename M::type, typename N::type>;

	public:
	using type=T;
	static constexpr T op(T a, T b) {
		return {M::op(a.first, b.first), N::op(a.second, b.second)};
	}
	static constexpr T e() { return {M::e(), N::e()}; }
};
