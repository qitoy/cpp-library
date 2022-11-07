---
data:
  _extendedDependsOn: []
  _extendedRequiredBy:
  - icon: ':heavy_check_mark:'
    path: graph/dijkstra.hpp
    title: graph/dijkstra.hpp
  - icon: ':heavy_check_mark:'
    path: graph/prim.hpp
    title: graph/prim.hpp
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/aoj/ALDS1_12_A.test.cpp
    title: test/aoj/ALDS1_12_A.test.cpp
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
  bundledCode: "#line 2 \"graph/adjacency_list.hpp\"\n\n#include <vector>\n#include\
    \ <cassert>\n\ntemplate<class T>\nstruct adjacency_list {\n\tadjacency_list()=default;\n\
    \texplicit adjacency_list(int n)\n\t\t: _n(n), _graph(n) {}\n\n\tvoid add_edge(int\
    \ from, int to, T weight) {\n\t\tassert(0<=from and from<_n);\n\t\tassert(0<=to\
    \ and to<_n);\n\t\t_graph[from].emplace_back(to, weight);\n\t}\n\n\tconst std::vector<std::pair<int,T>>&\
    \ operator[](int n) const {\n\t\tassert(0<=n and n<_n);\n\t\treturn _graph[n];\n\
    \t}\n\n\tstd::size_t size() const { return _n; }\n\n\tprivate:\n\tint _n;\n\t\
    std::vector<std::vector<std::pair<int,T>>> _graph;\n};\n"
  code: "#pragma once\n\n#include <vector>\n#include <cassert>\n\ntemplate<class T>\n\
    struct adjacency_list {\n\tadjacency_list()=default;\n\texplicit adjacency_list(int\
    \ n)\n\t\t: _n(n), _graph(n) {}\n\n\tvoid add_edge(int from, int to, T weight)\
    \ {\n\t\tassert(0<=from and from<_n);\n\t\tassert(0<=to and to<_n);\n\t\t_graph[from].emplace_back(to,\
    \ weight);\n\t}\n\n\tconst std::vector<std::pair<int,T>>& operator[](int n) const\
    \ {\n\t\tassert(0<=n and n<_n);\n\t\treturn _graph[n];\n\t}\n\n\tstd::size_t size()\
    \ const { return _n; }\n\n\tprivate:\n\tint _n;\n\tstd::vector<std::vector<std::pair<int,T>>>\
    \ _graph;\n};\n"
  dependsOn: []
  isVerificationFile: false
  path: graph/adjacency_list.hpp
  requiredBy:
  - graph/prim.hpp
  - graph/dijkstra.hpp
  timestamp: '2022-03-31 04:58:03+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/aoj/ALDS1_12_A.test.cpp
  - test/graph/dijkstra.test.cpp
  - test/library_checker/shortest_path.test.cpp
documentation_of: graph/adjacency_list.hpp
layout: document
redirect_from:
- /library/graph/adjacency_list.hpp
- /library/graph/adjacency_list.hpp.html
title: graph/adjacency_list.hpp
---
