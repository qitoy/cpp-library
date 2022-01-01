// {{{ ----------------------------- begin template -----------------------------

#include<bits/stdc++.h>
#include<atcoder/all>

template<class T> inline bool chmin(T& a,T b){
	if(a>b){ a=b; return true; }
	return false;
}

template<class T> inline bool chmax(T& a,T b){
	if(a<b){ a=b; return true; }
	return false;
}

struct input {
	template<class T> operator T() {
		T _in; std::cin >> _in; return _in;
	}
};

void scan(){}

template<class T, class... U>
void scan(T& t, U&... u) {
	std::cin >> t; scan(u...);
}

template<class T>
std::istream& operator>>(std::istream& is, std::vector<T>& vec) {
	for(auto& v:vec) is >> v;
	return is;
}

__attribute__((constructor)) void main_init() {
	std::cin.tie(nullptr);
	std::ios_base::sync_with_stdio(false);
	std::cout << std::fixed << std::setprecision(15);
}

int popcount(unsigned int x){ return __builtin_popcount(x); }

using namespace std;
using namespace atcoder;
using ll=long long;
#define all(c) begin(c), end(c)

// }}} ------------------------------ end template ------------------------------



int main(){



}
