#define PROBLEM "https://judge.yosupo.jp/problem/counting_primes"
#include<bits/stdc++.h>
#include"../../prime/pi.hpp"
using namespace std;

int main(){

	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	long long N; cin >> N;
	cout << prime_pi(N) << '\n';

}
