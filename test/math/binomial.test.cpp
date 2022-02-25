#define PROBLEM "https://atcoder.jp/contests/abc145/tasks/abc145_d"
#include<bits/stdc++.h>
#include"../../math/binomial.hpp"
using namespace std;

int main(){

	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int X,Y; cin >> X >> Y;
	if(2*X<Y or X>2*Y or (X+Y)%3!=0) {
		cout << 0 << '\n'; return 0;
	}
	binomial B(700000);
	cout << B.calc((X+Y)/3, (2*X-Y)/3) << '\n';

}
