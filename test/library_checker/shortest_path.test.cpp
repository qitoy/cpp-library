#define PROBLEM "https://judge.yosupo.jp/problem/shortest_path"
#include <bits/stdc++.h>
#include "graph/adjacency_list.hpp"
#include "graph/dijkstra.hpp"
using namespace std;

int main(){

	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int N,M,s,t; cin >> N >> M >> s >> t;
	adjacency_list<long long> G(N);
	while(M--) {
		int a,b; long long c; cin >> a >> b >> c;
		G.add_edge(a,b,c);
	}
	auto vec=get_preds_and_dists(G, s);
	long long X=vec[t].second;
	cout << X;
	if(X==-1) return 0;
	vector<int> ans={t};
	while(ans.back()!=s) ans.push_back(vec[ans.back()].first);
	int Y=ans.size()-1;
	cout << ' ' << Y << '\n';
	for (int i = Y; i > 0; i--) cout << ans[i] << ' ' << ans[i-1] << '\n';

}
