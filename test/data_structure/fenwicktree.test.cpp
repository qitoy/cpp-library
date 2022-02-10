#define PROBLEM "https://judge.yosupo.jp/problem/predecessor_problem"
#include<bits/stdc++.h>
#include"../../data_structure/fenwicktree.hpp"
using namespace std;

int main(){

	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int N,Q; cin >> N >> Q;
	string T; cin >> T;
	fenwick_tree<int> F(N);
	for (int i = 0; i < N; i++) F.modify(i, T[i]-'0');
	while(Q--) {
		int c,k; cin >> c >> k;
		if(c==0) F.modify(k,1);
		if(c==1) F.modify(k,0);
		if(c==2) cout << F.get(k) << '\n';
		if(c==3) {
			if(F.get(k)) cout << k << '\n';
			else {
				int r=F.sum(k)+1;
				if(r==N) cout << -1 << '\n';
				else cout << F.lower_bound(r) << '\n';
			}
		}
		if(c==4) {
			if(F.get(k)) cout << k << '\n';
			else {
				int r=F.sum(k);
				if(r==0) cout << -1 << '\n';
				else cout << F.lower_bound(r) << '\n';
			}
		}
	}

}
