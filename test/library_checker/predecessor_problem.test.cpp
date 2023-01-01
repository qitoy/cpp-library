#define PROBLEM "https://judge.yosupo.jp/problem/predecessor_problem"
#include <bits/stdc++.h>
#include "qitoy/data_structure/fenwicktree.hpp"
using namespace std;

int main(){

	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int N,Q; cin >> N >> Q;
	string T; cin >> T;
	fenwick_tree<int> F(N);
	for (int i = 0; i < N; i++) 
		F.add(i, T[i]-'0');
	while(Q--) {
		int c,k; cin >> c >> k;
		if(c==0) F.modify(k, 1);
		if(c==1) F.modify(k, 0);
		if(c==2) cout << F.get(k);
		if(c==3) {
			int l=F.lower_bound(F.sum(k)+1);
			cout << (l==N?-1:l);
		}
		if(c==4) cout << F.lower_bound(F.sum(k+1));
		cout << '\n';
	}

}
