template<class T> struct dijkstra {
	public:
		explicit dijkstra(int n) : _n(n), _graph(n) {}

		void add_edge(int from, int to, T weight) {
			assert(0 <= from && from < _n);
			assert(0 <= to && to < _n);
			assert(0 <= weight);
			_graph[from].emplace_back(weight, to);
		}

		std::vector<std::pair<T,int>> get_dists_and_preds(int from) {
			assert(0 <= from && from < _n);
			std::vector<std::pair<T,int>> dist_pred(_n, std::make_pair(-1,-1));
			dist_pred[from]=std::make_pair(0,-1);
			std::priority_queue<
				std::pair<T,int>,
				std::vector<std::pair<T,int>>,
				std::greater<std::pair<T,int>>
					> Q;
			Q.emplace(0,from);
			std::vector<bool> fixed(_n);
			while(!Q.empty()) {
				auto [d,v] = Q.top(); Q.pop();
				if(fixed[v]) continue;
				fixed[v]=true;
				for (auto&& [w,u] : _graph[v]) {
					if(dist_pred[u].first==-1 or d+w < dist_pred[u].first) {
						dist_pred[u]=std::make_pair(d+w,v);
						Q.emplace(d+w,u);
					}
				}
			}
			return dist_pred;
		}

	private:
		int _n;
		std::vector<std::vector<std::pair<T,int>>> _graph;
};
