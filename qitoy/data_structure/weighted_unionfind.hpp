#include <cassert>
#include <utility>
#include <vector>

template<class T>
struct weighted_uf {
	public:
		weighted_uf()=default;
		weighted_uf(int n)
			: _n(n), parent_or_size(n, -1), diff_weight(n) {}

		bool same(int x, int y) {
			return root(x)==root(y);
		}

		T diff(int x, int y) {
			return weight(y)-weight(x);
		}

		bool merge(int x, int y, T w) {
			w+=weight(x); w-=weight(y);
			x=root(x); y=root(y);
			if(x==y) return false;
			if(parent_or_size[x]>parent_or_size[y]) std::swap(x,y), w=-w;
			parent_or_size[x]+=parent_or_size[y];
			parent_or_size[y]=x;
			diff_weight[y]=w;
			return true;
		}

	private:
		int _n;
		std::vector<int> parent_or_size;
		std::vector<T> diff_weight;

		int root(int x) {
			assert(0<=x and x<_n);
			if(parent_or_size[x]<0) return x;
			int r=root(parent_or_size[x]);
			diff_weight[x]+=diff_weight[parent_or_size[x]];
			return parent_or_size[x]=r;
		}

		T weight(int x) {
			root(x);
			return diff_weight[x];
		}
};
