template<class T> struct dijkstra {
	public:
		explicit dijkstra(int n) : _n(n), _graph(n) {}

		void add_edge(int from, int to, T weight) {
			assert(0 <= from && from < _n);
			assert(0 <= to && to < _n);
			assert(0 <= weight);
			_graph[from].emplace_back(to, weight);
		}

		std::vector<T> get_dists(int from) {
			assert(0 <= from && from < _n);
			std::vector<T> dist(_n, -1);
			dist[from]=0;
			auto comp = [](auto x, auto y){ return x.second > y.second; };
			std::priority_queue<
				std::pair<int,T>,
				std::vector<std::pair<int,T>>,
				decltype(comp)
					> Q{comp};
			Q.emplace(from, 0);
			while(!Q.empty()) {
				auto [v, d] = Q.top(); Q.pop();
				for (auto&& [u, w] : _graph[v]) {
					if(dist[u]==-1 or d+w < dist[u]) {
						dist[u]=d+w;
						Q.emplace(u, d+w);
					}
				}
			}
			return dist;
		}

	private:
		int _n;
		std::vector<std::vector<std::pair<int,T>>> _graph;
};
