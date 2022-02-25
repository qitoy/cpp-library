#define PROBLEM "https://atcoder.jp/contests/abc021/tasks/abc021_d"
#include<bits/stdc++.h>
#include"../../math/binomial.hpp"
using namespace std;

int main(){

	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int n,k; cin >> n >> k;
	binomial B(200000);
	cout << B.calc(n+k-1, k) << '\n';

}
