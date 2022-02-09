#define PROBLEM "https://judge.yosupo.jp/problem/factorize"
#include<bits/stdc++.h>
#include"../../prime/factorize.hpp"
using namespace std;

int main(){

	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int Q; cin >> Q;
	while(Q--) {
		long long a; cin >> a;
		auto fac=factorize(a);
		cout << fac.size();
		for (auto&& p : fac) cout << ' ' << p;
		cout << '\n';
	}

}
