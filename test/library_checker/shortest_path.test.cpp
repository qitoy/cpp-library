#define PROBLEM "https://judge.yosupo.jp/problem/shortest_path"
#include<bits/stdc++.h>
#include"../../graph/dijkstra.hpp"
using namespace std;

int main(){

	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int N,M,s,t; cin >> N >> M >> s >> t;
	dijkstra<long long> D(N);
	while(M--) {
		int a,b; long long c; cin >> a >> b >> c;
		D.add_edge(a,b,c);
	}
	auto d_p=D.get_dists_and_preds(s);
	long long X=d_p[t].first;
	if(X==-1) {
		cout << -1; return 0;
	}
	vector<int> ans={t};
	while(ans.back()!=s) ans.push_back(d_p[ans.back()].second);
	int Y=ans.size()-1;
	cout << X << ' ' << Y << '\n';
	for(int i=Y; i>0; i--) 
		cout << ans[i] << ' ' << ans[i-1] << '\n';

}
