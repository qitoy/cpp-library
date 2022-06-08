#define PROBLEM "https://judge.yosupo.jp/problem/point_set_range_composite"
#include <bits/stdc++.h>
#include "data_structure/segment_tree.hpp"
using namespace std;

constexpr int mod=998244353;

class linear {
	using T=pair<int,int>;

	public:
	using type=T;
	static constexpr T op(T f, T g) {
		return {(long long)f.first*g.first%mod,
		   ((long long)f.second*g.first+g.second)%mod}; // g(f(x))
	}
	static constexpr T e{1,0};
};

int main(){

	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int N,Q; cin >> N >> Q;
	vector<linear::type> V(N);
	for(auto&& [a,b]:V) cin >> a >> b;
	segment_tree<linear> S(V);
	while(Q--) {
		int q; cin >> q;
		if(q==0) {
			int p,c,d; cin >> p >> c >> d;
			S.set(p, make_pair(c,d));
		}
		if(q==1) {
			int l,r,x; cin >> l >> r >> x;
			auto&& [a,b]=S.prod(l,r);
			cout << ((long long)a*x+b)%mod << '\n';
		}
	}

}
