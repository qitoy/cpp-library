#define PROBLEM "https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=DSL_2_A"
#include<bits/stdc++.h>
#include"../../data_structure/segment_tree.hpp"
#include"../../monoid/min_m.hpp"
using namespace std;

int main(){

	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int n,q; cin >> n >> q;
	segment_tree<min_m<int>> S(n);
	while(q--) {
		int com, x, y; cin >> com >> x >> y;
		if(com==0) S.set(x,y);
		if(com==1) cout << S.prod(x,y+1) << '\n';
	}

}
