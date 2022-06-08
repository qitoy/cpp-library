#define PROBLEM "https://judge.yosupo.jp/problem/point_add_range_sum"
#include <bits/stdc++.h>
#include "data_structure/fenwicktree.hpp"
using namespace std;

int main(){

	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int N,Q; cin >> N >> Q;
	fenwick_tree<long long> F(N);
	for (int i = 0; i < N; i++) {
		long long a; cin >> a;
		F.modify(i, a);
	}
	while(Q--) {
		int q; cin >> q;
		if(q==0) {
			int p; long long x; cin >> p >> x;
			F.add(p, x);
		}
		if(q==1) {
			int l, r; cin >> l >> r;
			cout << F.sum(l, r) << '\n';
		}
	}

}
