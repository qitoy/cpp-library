#define PROBLEM "https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_14_B"
#include <bits/stdc++.h>
#include "qitoy/string/RollingHash.hpp"
using namespace std;

int main(){

	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	string T,P; cin >> T >> P;
	RollingHash Th(T), Ph(P);
	int N=T.length(), M=P.length();
	for (int i = 0; i+M <= N; i++) 
		if(Th.gethash(i,i+M)==Ph.gethash(0,M))
			cout << i << '\n';


}
