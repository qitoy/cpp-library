// fenwicktree(ACL) modified
template <class T> struct fenwick_tree {
  public:
    fenwick_tree() : _n(0) {}
    explicit fenwick_tree(int n) : _n(n), data(n) {}

    void add(int p, T x) {
        assert(0 <= p && p < _n);
        p++;
        while (p <= _n) {
            data[p - 1] += x;
            p += p & -p;
        }
    }

	void modify(int p, T x) {
		add(p, x-get(p));
	}

	T get(int i) {
		return sum(i, i+1);
	}

    T sum(int r) {
        T s = 0;
        while (r > 0) {
            s += data[r - 1];
            r -= r & -r;
        }
        return s;
    }

    T sum(int l, int r) {
        assert(0 <= l && l <= r && r <= _n);
        return sum(r) - sum(l);
    }

	int lower_bound(T x) {
		if(x <= 0) return 0;
		int i=0;
		for(int k=1<<(32-__builtin_clz(_n)); k>0; k>>=1) {
			if(i+k <= _n && data[i+k-1] < x) {
				x -= data[i+k-1];
				i += k;
			}
		}
		// assert(sum(i-1)<x and x<=sum(i));
		return i;
	}

  private:
    int _n;
    std::vector<T> data;
};
