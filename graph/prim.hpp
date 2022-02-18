#include"adjacency_list.hpp"

template<class T>
std::pair<T, std::vector<int>> prim(const adjacency_list<T>& G, const int root) {
	assert(0<=root and root<G.size());

	std::vector<int> parent(G.size(), -1);
	parent[root]=root;

	std::vector<bool> is_correct(G.size());
	is_correct[root]=true;

	auto comp=[](auto x, auto y) { return x.second>y.second; };
	std::priority_queue<
		std::pair<int,T>,
		std::vector<std::pair<int,T>>,
		decltype(comp)
			> Q{comp};

	for(auto&& p:G[root]) {
		Q.push(p);
		parent[p.first]=root;
	}

	T w_sum=0;

	while(!Q.empty()) {
		auto [v, w]=Q.top(); Q.pop();
		if(is_correct[v]) continue;
		is_correct[v]=true;
		w_sum+=w;
		for(auto&& p:G[v]) {
			if(is_correct[p.first]) continue;
			Q.push(p);
			parent[p.first]=v;
		}
	}

	return {w_sum, parent};
}
