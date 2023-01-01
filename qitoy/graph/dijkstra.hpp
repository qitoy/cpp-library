#pragma once

#include <queue>

#include"adjacency_list.hpp"

template<class T>
std::vector<std::pair<int,T>> get_preds_and_dists(const adjacency_list<T>& G, const int from) {
	assert(0<=from and from<G.size());

	std::vector<std::pair<int,T>> pred_dist(G.size(), std::make_pair(-1, -1));
	pred_dist[from]=std::make_pair(-1, 0);

	std::vector<bool> is_correct(G.size());

	auto comp=[](auto x, auto y) { return x.second>y.second; };
	std::priority_queue<
		std::pair<int,T>,
		std::vector<std::pair<int,T>>,
		decltype(comp)
			> Q{comp};
	Q.emplace(from, 0);

	while(!Q.empty()) {
		auto [v,d]=Q.top(); Q.pop();
		if(is_correct[v]) continue;
		is_correct[v]=true;
		for(auto [u,w]:G[v]) {
			if(pred_dist[u].second==-1 or pred_dist[u].second>d+w) {
				pred_dist[u]=std::make_pair(v,d+w);
				Q.emplace(u,d+w);
			}
		}
	}

	return pred_dist;
}
