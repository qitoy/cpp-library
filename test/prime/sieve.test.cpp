#define PROBLEM "https://judge.yosupo.jp/problem/enumerate_primes"
#include <bits/stdc++.h>
#include "prime/sieve.hpp"
using namespace std;

int main(){

	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int N,A,B; cin >> N >> A >> B;
	auto isP=prime_sieve(N);
	vector<int> primes;
	int pi=0, X=0;
	for (int i = 1; i <= N; i++) if(isP[i]) if(pi++%A==B) {
		X++; primes.push_back(i);
	}
	cout << pi << ' ' << X << '\n';
	for (auto&& p : primes) cout << p << ' ';
	cout << '\n';

}
