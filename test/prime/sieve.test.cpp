#define PROBLEM "https://judge.yosupo.jp/problem/enumerate_primes"
#include<bits/stdc++.h>
#include"../../prime/sieve.hpp"
using namespace std;

int main(){

	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int N,A,B; cin >> N >> A >> B;
	auto isP=prime_sieve(N);
	vector<int> primes;
	for (int i = 1; i <= N; i++) 
		if(isP[i]) primes.push_back(i);
	int pi=primes.size(), X=pi/A;
	cout << pi << ' ' << X << '\n';
	for (int i = 0; i < X; i++) 
		cout << primes[A*i+B] << ' ';
	cout << '\n';

}
