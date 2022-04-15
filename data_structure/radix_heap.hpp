#include <algorithm>
#include <numeric>
#include <utility>
#include <vector>

template<class T>
struct radix_heap {
	public:
		using key_type = unsigned long long;
		using value_type = T;

		radix_heap() : sz(), last(), heap{} {
			std::fill(heap_min, heap_min+65, std::numeric_limits<key_type>::max());
		}

		std::size_t size() { return sz; }
		bool empty() { return sz==0; }

		void push(const key_type k, const value_type v) {
			assert(last<=k);
			int i=bsr(k^last)+1;
			heap[i].emplace_back(k,v);
			heap_min[i]=std::min(heap_min[i],k);
			sz++;
		} 

		std::pair<key_type, value_type> top() {
			pull();
			return heap[0].back();
		}

		void pop() {
			pull();
			heap[0].pop_back();
			if(heap[0].empty()) heap_min[0]=std::numeric_limits<key_type>::max();
			sz--;
		}

	private:
		std::size_t sz;
		key_type last;
		std::vector<std::pair<key_type, value_type>> heap[65];
		key_type heap_min[65];

		int bsr(const key_type k) {
			return k==0 ? -1 : 63-__builtin_clzll(k);
		}

		void pull() {
			assert(!empty());
			if(!heap[0].empty()) return;
			int i=1;
			while(heap[i].empty()) i++;
			last=heap_min[i];
			for(auto [k,v]:heap[i]) push(k,v);
			sz-=heap[i].size();
			heap[i].clear();
			heap_min[i]=std::numeric_limits<key_type>::max();
		}
};
