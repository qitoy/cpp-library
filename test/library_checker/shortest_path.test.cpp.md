---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: graph/adjacency_list.hpp
    title: graph/adjacency_list.hpp
  - icon: ':heavy_check_mark:'
    path: graph/dijkstra.hpp
    title: graph/dijkstra.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: https://judge.yosupo.jp/problem/shortest_path
    links:
    - https://judge.yosupo.jp/problem/shortest_path
  bundledCode: "#line 1 \"test/library_checker/shortest_path.test.cpp\"\n#define PROBLEM\
    \ \"https://judge.yosupo.jp/problem/shortest_path\"\n#include <bits/stdc++.h>\n\
    #line 2 \"graph/adjacency_list.hpp\"\n\n#line 5 \"graph/adjacency_list.hpp\"\n\
    \ntemplate<class T>\nstruct adjacency_list {\n\tadjacency_list()=default;\n\t\
    explicit adjacency_list(int n)\n\t\t: _n(n), _graph(n) {}\n\n\tvoid add_edge(int\
    \ from, int to, T weight) {\n\t\tassert(0<=from and from<_n);\n\t\tassert(0<=to\
    \ and to<_n);\n\t\t_graph[from].emplace_back(to, weight);\n\t}\n\n\tconst std::vector<std::pair<int,T>>&\
    \ operator[](int n) const {\n\t\tassert(0<=n and n<_n);\n\t\treturn _graph[n];\n\
    \t}\n\n\tstd::size_t size() const { return _n; }\n\n\tprivate:\n\tint _n;\n\t\
    std::vector<std::vector<std::pair<int,T>>> _graph;\n};\n#line 2 \"graph/dijkstra.hpp\"\
    \n\n#line 4 \"graph/dijkstra.hpp\"\n\n#line 6 \"graph/dijkstra.hpp\"\n\ntemplate<class\
    \ T>\nstd::vector<std::pair<int,T>> get_preds_and_dists(const adjacency_list<T>&\
    \ G, const int from) {\n\tassert(0<=from and from<G.size());\n\n\tstd::vector<std::pair<int,T>>\
    \ pred_dist(G.size(), std::make_pair(-1, -1));\n\tpred_dist[from]=std::make_pair(-1,\
    \ 0);\n\n\tstd::vector<bool> is_correct(G.size());\n\n\tauto comp=[](auto x, auto\
    \ y) { return x.second>y.second; };\n\tstd::priority_queue<\n\t\tstd::pair<int,T>,\n\
    \t\tstd::vector<std::pair<int,T>>,\n\t\tdecltype(comp)\n\t\t\t> Q{comp};\n\tQ.emplace(from,\
    \ 0);\n\n\twhile(!Q.empty()) {\n\t\tauto [v,d]=Q.top(); Q.pop();\n\t\tif(is_correct[v])\
    \ continue;\n\t\tis_correct[v]=true;\n\t\tfor(auto [u,w]:G[v]) {\n\t\t\tif(pred_dist[u].second==-1\
    \ or pred_dist[u].second>d+w) {\n\t\t\t\tpred_dist[u]=std::make_pair(v,d+w);\n\
    \t\t\t\tQ.emplace(u,d+w);\n\t\t\t}\n\t\t}\n\t}\n\n\treturn pred_dist;\n}\n#line\
    \ 5 \"test/library_checker/shortest_path.test.cpp\"\nusing namespace std;\n\n\
    int main(){\n\n\tcin.tie(nullptr);\n\tios_base::sync_with_stdio(false);\n\n\t\
    int N,M,s,t; cin >> N >> M >> s >> t;\n\tadjacency_list<long long> G(N);\n\twhile(M--)\
    \ {\n\t\tint a,b; long long c; cin >> a >> b >> c;\n\t\tG.add_edge(a,b,c);\n\t\
    }\n\tauto vec=get_preds_and_dists(G, s);\n\tlong long X=vec[t].second;\n\tcout\
    \ << X;\n\tif(X==-1) return 0;\n\tvector<int> ans={t};\n\twhile(ans.back()!=s)\
    \ ans.push_back(vec[ans.back()].first);\n\tint Y=ans.size()-1;\n\tcout << ' '\
    \ << Y << '\\n';\n\tfor (int i = Y; i > 0; i--) cout << ans[i] << ' ' << ans[i-1]\
    \ << '\\n';\n\n}\n"
  code: "#define PROBLEM \"https://judge.yosupo.jp/problem/shortest_path\"\n#include\
    \ <bits/stdc++.h>\n#include \"graph/adjacency_list.hpp\"\n#include \"graph/dijkstra.hpp\"\
    \nusing namespace std;\n\nint main(){\n\n\tcin.tie(nullptr);\n\tios_base::sync_with_stdio(false);\n\
    \n\tint N,M,s,t; cin >> N >> M >> s >> t;\n\tadjacency_list<long long> G(N);\n\
    \twhile(M--) {\n\t\tint a,b; long long c; cin >> a >> b >> c;\n\t\tG.add_edge(a,b,c);\n\
    \t}\n\tauto vec=get_preds_and_dists(G, s);\n\tlong long X=vec[t].second;\n\tcout\
    \ << X;\n\tif(X==-1) return 0;\n\tvector<int> ans={t};\n\twhile(ans.back()!=s)\
    \ ans.push_back(vec[ans.back()].first);\n\tint Y=ans.size()-1;\n\tcout << ' '\
    \ << Y << '\\n';\n\tfor (int i = Y; i > 0; i--) cout << ans[i] << ' ' << ans[i-1]\
    \ << '\\n';\n\n}\n"
  dependsOn:
  - graph/adjacency_list.hpp
  - graph/dijkstra.hpp
  isVerificationFile: true
  path: test/library_checker/shortest_path.test.cpp
  requiredBy: []
  timestamp: '2022-06-08 13:10:37+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: test/library_checker/shortest_path.test.cpp
layout: document
redirect_from:
- /verify/test/library_checker/shortest_path.test.cpp
- /verify/test/library_checker/shortest_path.test.cpp.html
title: test/library_checker/shortest_path.test.cpp
---
