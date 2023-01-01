---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: qitoy/graph/adjacency_list.hpp
    title: qitoy/graph/adjacency_list.hpp
  - icon: ':heavy_check_mark:'
    path: qitoy/graph/prim.hpp
    title: qitoy/graph/prim.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_12_A
    links:
    - https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_12_A
  bundledCode: "#line 1 \"test/aoj/ALDS1_12_A.test.cpp\"\n#define PROBLEM \"https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_12_A\"\
    \n#include <bits/stdc++.h>\n#line 2 \"qitoy/graph/adjacency_list.hpp\"\n\n#line\
    \ 5 \"qitoy/graph/adjacency_list.hpp\"\n\ntemplate<class T>\nstruct adjacency_list\
    \ {\n\tadjacency_list()=default;\n\texplicit adjacency_list(int n)\n\t\t: _n(n),\
    \ _graph(n) {}\n\n\tvoid add_edge(int from, int to, T weight) {\n\t\tassert(0<=from\
    \ and from<_n);\n\t\tassert(0<=to and to<_n);\n\t\t_graph[from].emplace_back(to,\
    \ weight);\n\t}\n\n\tconst std::vector<std::pair<int,T>>& operator[](int n) const\
    \ {\n\t\tassert(0<=n and n<_n);\n\t\treturn _graph[n];\n\t}\n\n\tstd::size_t size()\
    \ const { return _n; }\n\n\tprivate:\n\tint _n;\n\tstd::vector<std::vector<std::pair<int,T>>>\
    \ _graph;\n};\n#line 2 \"qitoy/graph/prim.hpp\"\n\ntemplate<class T>\nstd::pair<T,\
    \ std::vector<int>> prim(const adjacency_list<T>& G, const int root) {\n\tassert(0<=root\
    \ and root<G.size());\n\n\tstd::vector<int> parent(G.size(), -1);\n\tparent[root]=root;\n\
    \n\tstd::vector<bool> is_correct(G.size());\n\tis_correct[root]=true;\n\n\tauto\
    \ comp=[](auto x, auto y) { return x.second>y.second; };\n\tstd::priority_queue<\n\
    \t\tstd::pair<int,T>,\n\t\tstd::vector<std::pair<int,T>>,\n\t\tdecltype(comp)\n\
    \t\t\t> Q{comp};\n\n\tfor(auto&& p:G[root]) {\n\t\tQ.push(p);\n\t\tparent[p.first]=root;\n\
    \t}\n\n\tT w_sum=0;\n\n\twhile(!Q.empty()) {\n\t\tauto [v, w]=Q.top(); Q.pop();\n\
    \t\tif(is_correct[v]) continue;\n\t\tis_correct[v]=true;\n\t\tw_sum+=w;\n\t\t\
    for(auto&& p:G[v]) {\n\t\t\tif(is_correct[p.first]) continue;\n\t\t\tQ.push(p);\n\
    \t\t\tparent[p.first]=v;\n\t\t}\n\t}\n\n\treturn {w_sum, parent};\n}\n#line 5\
    \ \"test/aoj/ALDS1_12_A.test.cpp\"\nusing namespace std;\n\nint main(){\n\n\t\
    cin.tie(nullptr);\n\tios_base::sync_with_stdio(false);\n\n\tint n; cin >> n;\n\
    \tadjacency_list<int> G(n);\n\tfor (int i = 0; i < n; i++) for (int j = 0; j <\
    \ n; j++) {\n\t\tint a; cin >> a;\n\t\tif(a!=-1) G.add_edge(i,j,a);\n\t}\n\tcout\
    \ << prim(G, 0).first << '\\n';\n\n}\n"
  code: "#define PROBLEM \"https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_12_A\"\
    \n#include <bits/stdc++.h>\n#include \"qitoy/graph/adjacency_list.hpp\"\n#include\
    \ \"qitoy/graph/prim.hpp\"\nusing namespace std;\n\nint main(){\n\n\tcin.tie(nullptr);\n\
    \tios_base::sync_with_stdio(false);\n\n\tint n; cin >> n;\n\tadjacency_list<int>\
    \ G(n);\n\tfor (int i = 0; i < n; i++) for (int j = 0; j < n; j++) {\n\t\tint\
    \ a; cin >> a;\n\t\tif(a!=-1) G.add_edge(i,j,a);\n\t}\n\tcout << prim(G, 0).first\
    \ << '\\n';\n\n}\n"
  dependsOn:
  - qitoy/graph/adjacency_list.hpp
  - qitoy/graph/prim.hpp
  isVerificationFile: true
  path: test/aoj/ALDS1_12_A.test.cpp
  requiredBy: []
  timestamp: '2023-01-01 21:12:37+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: test/aoj/ALDS1_12_A.test.cpp
layout: document
redirect_from:
- /verify/test/aoj/ALDS1_12_A.test.cpp
- /verify/test/aoj/ALDS1_12_A.test.cpp.html
title: test/aoj/ALDS1_12_A.test.cpp
---
