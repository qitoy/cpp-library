template<class M, class N>
class maybe {
	using T=std::pair<typename M::type, typename N::type>;

	public:
	using type=T;
	static constexpr T op(const T& a, const T& b) {
		return T(M::op(a.first, b.first), N::op(a.second, b.second));
	}
	static constexpr T e(M::e, N::e);
};
