---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: graph/adjacency_list.hpp
    title: graph/adjacency_list.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/graph/dijkstra.test.cpp
    title: test/graph/dijkstra.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/library_checker/shortest_path.test.cpp
    title: test/library_checker/shortest_path.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 2 \"graph/dijkstra.hpp\"\n\n#include <queue>\n\n#line 2 \"graph/adjacency_list.hpp\"\
    \n\n#include <vector>\n#include <cassert>\n\ntemplate<class T>\nstruct adjacency_list\
    \ {\n\tadjacency_list()=default;\n\texplicit adjacency_list(int n)\n\t\t: _n(n),\
    \ _graph(n) {}\n\n\tvoid add_edge(int from, int to, T weight) {\n\t\tassert(0<=from\
    \ and from<_n);\n\t\tassert(0<=to and to<_n);\n\t\t_graph[from].emplace_back(to,\
    \ weight);\n\t}\n\n\tconst std::vector<std::pair<int,T>>& operator[](int n) const\
    \ {\n\t\tassert(0<=n and n<_n);\n\t\treturn _graph[n];\n\t}\n\n\tstd::size_t size()\
    \ const { return _n; }\n\n\tprivate:\n\tint _n;\n\tstd::vector<std::vector<std::pair<int,T>>>\
    \ _graph;\n};\n#line 6 \"graph/dijkstra.hpp\"\n\ntemplate<class T>\nstd::vector<std::pair<int,T>>\
    \ get_preds_and_dists(const adjacency_list<T>& G, const int from) {\n\tassert(0<=from\
    \ and from<G.size());\n\n\tstd::vector<std::pair<int,T>> pred_dist(G.size(), std::make_pair(-1,\
    \ -1));\n\tpred_dist[from]=std::make_pair(-1, 0);\n\n\tstd::vector<bool> is_correct(G.size());\n\
    \n\tauto comp=[](auto x, auto y) { return x.second>y.second; };\n\tstd::priority_queue<\n\
    \t\tstd::pair<int,T>,\n\t\tstd::vector<std::pair<int,T>>,\n\t\tdecltype(comp)\n\
    \t\t\t> Q{comp};\n\tQ.emplace(from, 0);\n\n\twhile(!Q.empty()) {\n\t\tauto [v,d]=Q.top();\
    \ Q.pop();\n\t\tif(is_correct[v]) continue;\n\t\tis_correct[v]=true;\n\t\tfor(auto\
    \ [u,w]:G[v]) {\n\t\t\tif(pred_dist[u].second==-1 or pred_dist[u].second>d+w)\
    \ {\n\t\t\t\tpred_dist[u]=std::make_pair(v,d+w);\n\t\t\t\tQ.emplace(u,d+w);\n\t\
    \t\t}\n\t\t}\n\t}\n\n\treturn pred_dist;\n}\n"
  code: "#pragma once\n\n#include <queue>\n\n#include\"adjacency_list.hpp\"\n\ntemplate<class\
    \ T>\nstd::vector<std::pair<int,T>> get_preds_and_dists(const adjacency_list<T>&\
    \ G, const int from) {\n\tassert(0<=from and from<G.size());\n\n\tstd::vector<std::pair<int,T>>\
    \ pred_dist(G.size(), std::make_pair(-1, -1));\n\tpred_dist[from]=std::make_pair(-1,\
    \ 0);\n\n\tstd::vector<bool> is_correct(G.size());\n\n\tauto comp=[](auto x, auto\
    \ y) { return x.second>y.second; };\n\tstd::priority_queue<\n\t\tstd::pair<int,T>,\n\
    \t\tstd::vector<std::pair<int,T>>,\n\t\tdecltype(comp)\n\t\t\t> Q{comp};\n\tQ.emplace(from,\
    \ 0);\n\n\twhile(!Q.empty()) {\n\t\tauto [v,d]=Q.top(); Q.pop();\n\t\tif(is_correct[v])\
    \ continue;\n\t\tis_correct[v]=true;\n\t\tfor(auto [u,w]:G[v]) {\n\t\t\tif(pred_dist[u].second==-1\
    \ or pred_dist[u].second>d+w) {\n\t\t\t\tpred_dist[u]=std::make_pair(v,d+w);\n\
    \t\t\t\tQ.emplace(u,d+w);\n\t\t\t}\n\t\t}\n\t}\n\n\treturn pred_dist;\n}\n"
  dependsOn:
  - graph/adjacency_list.hpp
  isVerificationFile: false
  path: graph/dijkstra.hpp
  requiredBy: []
  timestamp: '2022-03-31 04:58:03+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/graph/dijkstra.test.cpp
  - test/library_checker/shortest_path.test.cpp
documentation_of: graph/dijkstra.hpp
layout: document
redirect_from:
- /library/graph/dijkstra.hpp
- /library/graph/dijkstra.hpp.html
title: graph/dijkstra.hpp
---
