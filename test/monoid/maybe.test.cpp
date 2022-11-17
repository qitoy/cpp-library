#define PROBLEM "https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_1_A"
#include <bits/stdc++.h>
#include "monoid/add_m.hpp"
#include "monoid/maybe.hpp"
using namespace std;

struct C {
	constexpr C(int n) : _n(n) {}
	constexpr bool operator==(const C& r) const {
		return _n==r._n;
	}
	int _n;
};

template<class T>
struct change {
	using type=T;
	static constexpr T op(T a, T b){ return b; }
};

int main(){

	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	using M=maybe<add_m<int>>;
	using T=typename M::type;

	static_assert(M::e()==nullopt);
	static_assert(M::op(M::e(), M::e())==M::e());
	static_assert(M::op(T(1), M::e())==T(1));
	static_assert(M::op(M::e(), T(2))==T(2));
	static_assert(M::op(T(1), T(2))==T(3));

	using N=maybe<change<C>>;
	using S=typename N::type;
	constexpr C a(114),b(514);

	static_assert(N::op(S(a), N::e())==S(a));
	static_assert(N::op(N::e(), S(b))==S(b));
	static_assert(N::op(S(a), S(b))==S(b));

	cout << "Hello World\n";

}
