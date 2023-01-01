---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: qitoy/graph/adjacency_list.hpp
    title: qitoy/graph/adjacency_list.hpp
  - icon: ':heavy_check_mark:'
    path: qitoy/graph/dijkstra.hpp
    title: qitoy/graph/dijkstra.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=GRL_1_A
    links:
    - https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=GRL_1_A
  bundledCode: "#line 1 \"test/graph/dijkstra.test.cpp\"\n#define PROBLEM \"https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=GRL_1_A\"\
    \n#include <bits/stdc++.h>\n#line 2 \"qitoy/graph/adjacency_list.hpp\"\n\n#line\
    \ 5 \"qitoy/graph/adjacency_list.hpp\"\n\ntemplate<class T>\nstruct adjacency_list\
    \ {\n\tadjacency_list()=default;\n\texplicit adjacency_list(int n)\n\t\t: _n(n),\
    \ _graph(n) {}\n\n\tvoid add_edge(int from, int to, T weight) {\n\t\tassert(0<=from\
    \ and from<_n);\n\t\tassert(0<=to and to<_n);\n\t\t_graph[from].emplace_back(to,\
    \ weight);\n\t}\n\n\tconst std::vector<std::pair<int,T>>& operator[](int n) const\
    \ {\n\t\tassert(0<=n and n<_n);\n\t\treturn _graph[n];\n\t}\n\n\tstd::size_t size()\
    \ const { return _n; }\n\n\tprivate:\n\tint _n;\n\tstd::vector<std::vector<std::pair<int,T>>>\
    \ _graph;\n};\n#line 2 \"qitoy/graph/dijkstra.hpp\"\n\n#line 4 \"qitoy/graph/dijkstra.hpp\"\
    \n\n#line 6 \"qitoy/graph/dijkstra.hpp\"\n\ntemplate<class T>\nstd::vector<std::pair<int,T>>\
    \ get_preds_and_dists(const adjacency_list<T>& G, const int from) {\n\tassert(0<=from\
    \ and from<G.size());\n\n\tstd::vector<std::pair<int,T>> pred_dist(G.size(), std::make_pair(-1,\
    \ -1));\n\tpred_dist[from]=std::make_pair(-1, 0);\n\n\tstd::vector<bool> is_correct(G.size());\n\
    \n\tauto comp=[](auto x, auto y) { return x.second>y.second; };\n\tstd::priority_queue<\n\
    \t\tstd::pair<int,T>,\n\t\tstd::vector<std::pair<int,T>>,\n\t\tdecltype(comp)\n\
    \t\t\t> Q{comp};\n\tQ.emplace(from, 0);\n\n\twhile(!Q.empty()) {\n\t\tauto [v,d]=Q.top();\
    \ Q.pop();\n\t\tif(is_correct[v]) continue;\n\t\tis_correct[v]=true;\n\t\tfor(auto\
    \ [u,w]:G[v]) {\n\t\t\tif(pred_dist[u].second==-1 or pred_dist[u].second>d+w)\
    \ {\n\t\t\t\tpred_dist[u]=std::make_pair(v,d+w);\n\t\t\t\tQ.emplace(u,d+w);\n\t\
    \t\t}\n\t\t}\n\t}\n\n\treturn pred_dist;\n}\n#line 5 \"test/graph/dijkstra.test.cpp\"\
    \nusing namespace std;\n\nint main(){\n\n\tcin.tie(nullptr);\n\tios_base::sync_with_stdio(false);\n\
    \n\tint V,E,r; cin >> V >> E >> r;\n\tadjacency_list<long long> G(V);\n\twhile(E--)\
    \ {\n\t\tint s,t; long long d; cin >> s >> t >> d;\n\t\tG.add_edge(s,t,d);\n\t\
    }\n\tfor (auto&& [v, d] : get_preds_and_dists(G, r)) {\n\t\tif(d!=-1) cout <<\
    \ d;\n\t\telse cout << \"INF\";\n\t\tcout << '\\n';\n\t}\n\n}\n"
  code: "#define PROBLEM \"https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=GRL_1_A\"\
    \n#include <bits/stdc++.h>\n#include \"qitoy/graph/adjacency_list.hpp\"\n#include\
    \ \"qitoy/graph/dijkstra.hpp\"\nusing namespace std;\n\nint main(){\n\n\tcin.tie(nullptr);\n\
    \tios_base::sync_with_stdio(false);\n\n\tint V,E,r; cin >> V >> E >> r;\n\tadjacency_list<long\
    \ long> G(V);\n\twhile(E--) {\n\t\tint s,t; long long d; cin >> s >> t >> d;\n\
    \t\tG.add_edge(s,t,d);\n\t}\n\tfor (auto&& [v, d] : get_preds_and_dists(G, r))\
    \ {\n\t\tif(d!=-1) cout << d;\n\t\telse cout << \"INF\";\n\t\tcout << '\\n';\n\
    \t}\n\n}\n"
  dependsOn:
  - qitoy/graph/adjacency_list.hpp
  - qitoy/graph/dijkstra.hpp
  isVerificationFile: true
  path: test/graph/dijkstra.test.cpp
  requiredBy: []
  timestamp: '2023-01-01 21:12:37+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: test/graph/dijkstra.test.cpp
layout: document
redirect_from:
- /verify/test/graph/dijkstra.test.cpp
- /verify/test/graph/dijkstra.test.cpp.html
title: test/graph/dijkstra.test.cpp
---
