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

template<class... T>
void scan(T&... a) {
	(std::cin >> ... >> a);
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

#define rep1(a)          for(int i = 0; i < a; i++)
#define rep2(i, a)       for(int i = 0; i < a; i++)
#define rep3(i, a, b)    for(int i = a; i < b; i++)
#define rep4(i, a, b, c) for(int i = a; i < b; i += c)

#define overload4(a, b, c, d, e, ...) e
#define rep(...) overload4(__VA_ARGS__, rep4, rep3, rep2, rep1)(__VA_ARGS__)

// }}} ------------------------------ end template ------------------------------



int main(){



}
