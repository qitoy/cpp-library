#pragma once

#include <vector>
#include <cassert>

template<class T>
struct adjacency_list {
	adjacency_list()=default;
	explicit adjacency_list(int n)
		: _n(n), _graph(n) {}

	void add_edge(int from, int to, T weight) {
		assert(0<=from and from<_n);
		assert(0<=to and to<_n);
		_graph[from].emplace_back(to, weight);
	}

	const std::vector<std::pair<int,T>>& operator[](int n) const {
		assert(0<=n and n<_n);
		return _graph[n];
	}

	std::size_t size() const { return _n; }

	private:
	int _n;
	std::vector<std::vector<std::pair<int,T>>> _graph;
};
