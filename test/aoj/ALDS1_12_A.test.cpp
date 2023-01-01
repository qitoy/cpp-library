#define PROBLEM "https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_12_A"
#include <bits/stdc++.h>
#include "qitoy/graph/adjacency_list.hpp"
#include "qitoy/graph/prim.hpp"
using namespace std;

int main(){

	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int n; cin >> n;
	adjacency_list<int> G(n);
	for (int i = 0; i < n; i++) for (int j = 0; j < n; j++) {
		int a; cin >> a;
		if(a!=-1) G.add_edge(i,j,a);
	}
	cout << prim(G, 0).first << '\n';

}
