#include <utility>
#include <functional>
#include <random>

namespace std {
	template<class T, class U>
		struct hash<pair<T,U>> {
			public:
				size_t operator()(const pair<T,U>& p) const {
					size_t ret=0;
					ret^=hash<T>{}(p.first)+0x9e3779b9+(ret<<6)+(ret>>2);
					ret^=hash<U>{}(p.second)+0x9e3779b9+(ret<<6)+(ret>>2);
					ret^=seed+0x9e3779b9+(ret<<6)+(ret>>2);
					return ret;
				}
			private:
				inline static const size_t seed=random_device()();
		};
}
