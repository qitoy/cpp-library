template<class S>
class maybe {
	using T=std::optional<typename S::type>;

	public:
	using type=T;
	static constexpr T op(const T& a, const T& b) noexcept {
		if(!a) return b;
		if(!b) return a;
		return T(std::in_place, S::op(*a, *b));
	}
	static constexpr T e=std::nullopt;
};
