#define PROBLEM "https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=GRL_1_A"
#include<bits/stdc++.h>
#include"../../graph/dijkstra.hpp"
using namespace std;

int main(){

	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int V,E,r; cin >> V >> E >> r;
	dijkstra<long long> D(V);
	while(E--) {
		int s,t; long long d; cin >> s >> t >> d;
		D.add_edge(s,t,d);
	}
	for (auto&& [d,v] : D.get_dists_and_preds(r)) {
		if(d!=-1) cout << d;
		else cout << "INF";
		cout << '\n';
	}

}
