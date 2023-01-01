#define PROBLEM "https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=DSL_1_B"
#include <bits/stdc++.h>
#include "qitoy/data_structure/weighted_unionfind.hpp"
using namespace std;

int main(){

	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int n,q; cin >> n >> q;
	weighted_uf<int> wuf(n);
	while(q--) {
		int c; cin >> c;
		if(c==0) {
			int x,y,z; cin >> x >> y >> z;
			wuf.merge(x,y,z);
		} else {
			int x,y; cin >> x >> y;
			if(wuf.same(x,y)) cout << wuf.diff(x,y) << '\n';
			else cout << '?' << '\n';
		}
	}

}
