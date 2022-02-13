template<class S>
struct maybe {
	using type=T;
	static constexpr T op(const T& a, const T& b) noexcept {
		if(!l) return r;
		if(!r) return l;
		return T(std::in_place, S::op(*l, *r));
	}
	static constexpr T e=std::nullopt;

	private:
	using T=std::optional<typename S::type>;
};
