#include <cassert>
#include <vector>

template<class M>
class segment_tree {
		using T=typename M::type;

	public:
		segment_tree()=default;
		explicit segment_tree(int n)
			: _n(n), _vec(2*n, M::e) { }
		explicit segment_tree(std::vector<T>& vec)
			: _n(vec.size()), _vec(2*_n) {
				for (int i = 0; i < _n; i++) 
					_vec[_n+i]=vec[i];
				for (int i = _n-1; i > 0; i--)
					_vec[i]=M::op(_vec[i<<1|0], _vec[i<<1|1]);
			}

		void set(int p, T x) {
			assert(0<=p and p<_n);
			p+=_n; _vec[p]=x;
			while(p>1) {
				p>>=1;
				_vec[p]=M::op(_vec[p<<1|0], _vec[p<<1|1]);
			}
		}

		void add(int p, T x) { set(p, M::op(get(p), x)); }

		T get(int p) {
			assert(0<=p and p<_n);
			return _vec[_n+p];
		}

		T prod(int l, int r) {
			assert(0<=l and l<=r and r<=_n);
			T ret1=M::e, ret2=M::e;
			l+=_n; r+=_n;
			while(l<r) {
				if(l&1) ret1=M::op(ret1, _vec[l++]);
				if(r&1) ret2=M::op(_vec[--r], ret2);
				l>>=1; r>>=1;
			}
			return M::op(ret1, ret2);
		}

	private:
		int _n;
		std::vector<T> _vec;
};
