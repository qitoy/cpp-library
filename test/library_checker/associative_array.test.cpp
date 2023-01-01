#define PROBLEM "https://judge.yosupo.jp/problem/associative_array"
#include <bits/stdc++.h>
#include "qitoy/vector/coordinate_compression.hpp"
using namespace std;

int main(){

	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int Q; cin >> Q;
	vector<pair<int, long long>> Query(Q);
	vector<long long> K(Q);
	for (int i = 0; i < Q; i++) {
		auto&& [q,v]=Query[i];
		cin >> q >> K[i];
		if(q==0) cin >> v;
	}
	coordinate_compression(K);
	vector<long long> ans(K.size());
	for (int i = 0; i < Q; i++) {
		auto&& [q,v]=Query[i];
		if(q==0) ans[K[i]]=v;
		if(q==1) cout << ans[K[i]] << '\n';
	}

}
