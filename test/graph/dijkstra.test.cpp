#define PROBLEM "https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=GRL_1_A"
#include <bits/stdc++.h>
#include "qitoy/graph/adjacency_list.hpp"
#include "qitoy/graph/dijkstra.hpp"
using namespace std;

int main(){

	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int V,E,r; cin >> V >> E >> r;
	adjacency_list<long long> G(V);
	while(E--) {
		int s,t; long long d; cin >> s >> t >> d;
		G.add_edge(s,t,d);
	}
	for (auto&& [v, d] : get_preds_and_dists(G, r)) {
		if(d!=-1) cout << d;
		else cout << "INF";
		cout << '\n';
	}

}
