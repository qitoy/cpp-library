#include <cassert>
#include <vector>

template<class M>
class dual_segtree {
	private:
		using T=typename M::type;

	public:
		using type=T;

		dual_segtree()=default;
		explicit dual_segtree(int n)
			: _n(n), _vec(2*n, M::e()) {}

		void add(int l, int r, T x) {
			assert(0<=l and l<r and r<=_n);
			l+=_n; r+=_n;
			prepare(l); prepare(r);
			while(l<r) {
				if(l&1) adapt(_vec[l++], x);
				if(r&1) adapt(_vec[--r], x);
				l>>=1; r>>=1;
			}
		}

		T get(int p) {
			assert(0<=p and p<_n);
			p+=_n;
			T ret=M::e();
			while(p>0) {
				adapt(ret, _vec[p]);
				p>>=1;
			}
			return ret;
		}

	private:
		int _n;
		std::vector<T> _vec;

		void adapt(T& f, T g) { f=M::op(f, g); }

		void push(int p) {
			adapt(_vec[p<<1|0], _vec[p]);
			adapt(_vec[p<<1|1], _vec[p]);
			_vec[p]=M::e;
		}

		void prepare(int p) {
			if(p==0) return;
			while((p&1)==0) p>>=1;
			for(int i=31-__builtin_clz(p); i>0; i--)
				push(p>>i);
		}
};
