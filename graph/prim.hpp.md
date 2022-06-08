---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: graph/adjacency_list.hpp
    title: graph/adjacency_list.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/aoj/ALDS1_12_A.test.cpp
    title: test/aoj/ALDS1_12_A.test.cpp
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
    std::vector<std::vector<std::pair<int,T>>> _graph;\n};\n#line 2 \"graph/prim.hpp\"\
    \n\ntemplate<class T>\nstd::pair<T, std::vector<int>> prim(const adjacency_list<T>&\
    \ G, const int root) {\n\tassert(0<=root and root<G.size());\n\n\tstd::vector<int>\
    \ parent(G.size(), -1);\n\tparent[root]=root;\n\n\tstd::vector<bool> is_correct(G.size());\n\
    \tis_correct[root]=true;\n\n\tauto comp=[](auto x, auto y) { return x.second>y.second;\
    \ };\n\tstd::priority_queue<\n\t\tstd::pair<int,T>,\n\t\tstd::vector<std::pair<int,T>>,\n\
    \t\tdecltype(comp)\n\t\t\t> Q{comp};\n\n\tfor(auto&& p:G[root]) {\n\t\tQ.push(p);\n\
    \t\tparent[p.first]=root;\n\t}\n\n\tT w_sum=0;\n\n\twhile(!Q.empty()) {\n\t\t\
    auto [v, w]=Q.top(); Q.pop();\n\t\tif(is_correct[v]) continue;\n\t\tis_correct[v]=true;\n\
    \t\tw_sum+=w;\n\t\tfor(auto&& p:G[v]) {\n\t\t\tif(is_correct[p.first]) continue;\n\
    \t\t\tQ.push(p);\n\t\t\tparent[p.first]=v;\n\t\t}\n\t}\n\n\treturn {w_sum, parent};\n\
    }\n"
  code: "#include\"adjacency_list.hpp\"\n\ntemplate<class T>\nstd::pair<T, std::vector<int>>\
    \ prim(const adjacency_list<T>& G, const int root) {\n\tassert(0<=root and root<G.size());\n\
    \n\tstd::vector<int> parent(G.size(), -1);\n\tparent[root]=root;\n\n\tstd::vector<bool>\
    \ is_correct(G.size());\n\tis_correct[root]=true;\n\n\tauto comp=[](auto x, auto\
    \ y) { return x.second>y.second; };\n\tstd::priority_queue<\n\t\tstd::pair<int,T>,\n\
    \t\tstd::vector<std::pair<int,T>>,\n\t\tdecltype(comp)\n\t\t\t> Q{comp};\n\n\t\
    for(auto&& p:G[root]) {\n\t\tQ.push(p);\n\t\tparent[p.first]=root;\n\t}\n\n\t\
    T w_sum=0;\n\n\twhile(!Q.empty()) {\n\t\tauto [v, w]=Q.top(); Q.pop();\n\t\tif(is_correct[v])\
    \ continue;\n\t\tis_correct[v]=true;\n\t\tw_sum+=w;\n\t\tfor(auto&& p:G[v]) {\n\
    \t\t\tif(is_correct[p.first]) continue;\n\t\t\tQ.push(p);\n\t\t\tparent[p.first]=v;\n\
    \t\t}\n\t}\n\n\treturn {w_sum, parent};\n}\n"
  dependsOn:
  - graph/adjacency_list.hpp
  isVerificationFile: false
  path: graph/prim.hpp
  requiredBy: []
  timestamp: '2022-03-31 04:58:03+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/aoj/ALDS1_12_A.test.cpp
documentation_of: graph/prim.hpp
layout: document
redirect_from:
- /library/graph/prim.hpp
- /library/graph/prim.hpp.html
title: graph/prim.hpp
---
