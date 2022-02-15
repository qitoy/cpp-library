#define PROBLEM "https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=DSL_2_D"
#define IGNORE
#include<bits/stdc++.h>
#include"../../data_structure/dual_segment_tree.hpp"
#include"../../monoid/maybe.hpp"
using namespace std;

template<class T>
struct change {
	using type=T;
	static constexpr T op(T a, T b) { return b; }
};

int main(){

	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int n,q; cin >> n >> q;
	dual_segtree<maybe<change<int>>> S(n);
	while(q--) {
		int com; cin >> com;
		if(com==0) {
			int s,t,x; cin >> s >> t >> x;
			S.add(s,t+1,x);
		}
		if(com==1) {
			int i; cin >> i;
			decltype(S)::type ret=S.get(i);
			cout << (ret?*ret:numeric_limits<int>::max()) << '\n';
		}
	}

}
