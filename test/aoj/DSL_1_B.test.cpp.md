---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: qitoy/data_structure/weighted_unionfind.hpp
    title: qitoy/data_structure/weighted_unionfind.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=DSL_1_B
    links:
    - https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=DSL_1_B
  bundledCode: "#line 1 \"test/aoj/DSL_1_B.test.cpp\"\n#define PROBLEM \"https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=DSL_1_B\"\
    \n#include <bits/stdc++.h>\n#line 4 \"qitoy/data_structure/weighted_unionfind.hpp\"\
    \n\ntemplate<class T>\nstruct weighted_uf {\n\tpublic:\n\t\tweighted_uf()=default;\n\
    \t\tweighted_uf(int n)\n\t\t\t: _n(n), parent_or_size(n, -1), diff_weight(n) {}\n\
    \n\t\tbool same(int x, int y) {\n\t\t\treturn root(x)==root(y);\n\t\t}\n\n\t\t\
    T diff(int x, int y) {\n\t\t\treturn weight(y)-weight(x);\n\t\t}\n\n\t\tbool merge(int\
    \ x, int y, T w) {\n\t\t\tw+=weight(x); w-=weight(y);\n\t\t\tx=root(x); y=root(y);\n\
    \t\t\tif(x==y) return false;\n\t\t\tif(parent_or_size[x]>parent_or_size[y]) std::swap(x,y),\
    \ w=-w;\n\t\t\tparent_or_size[x]+=parent_or_size[y];\n\t\t\tparent_or_size[y]=x;\n\
    \t\t\tdiff_weight[y]=w;\n\t\t\treturn true;\n\t\t}\n\n\tprivate:\n\t\tint _n;\n\
    \t\tstd::vector<int> parent_or_size;\n\t\tstd::vector<T> diff_weight;\n\n\t\t\
    int root(int x) {\n\t\t\tassert(0<=x and x<_n);\n\t\t\tif(parent_or_size[x]<0)\
    \ return x;\n\t\t\tint r=root(parent_or_size[x]);\n\t\t\tdiff_weight[x]+=diff_weight[parent_or_size[x]];\n\
    \t\t\treturn parent_or_size[x]=r;\n\t\t}\n\n\t\tT weight(int x) {\n\t\t\troot(x);\n\
    \t\t\treturn diff_weight[x];\n\t\t}\n};\n#line 4 \"test/aoj/DSL_1_B.test.cpp\"\
    \nusing namespace std;\n\nint main(){\n\n\tcin.tie(nullptr);\n\tios_base::sync_with_stdio(false);\n\
    \n\tint n,q; cin >> n >> q;\n\tweighted_uf<int> wuf(n);\n\twhile(q--) {\n\t\t\
    int c; cin >> c;\n\t\tif(c==0) {\n\t\t\tint x,y,z; cin >> x >> y >> z;\n\t\t\t\
    wuf.merge(x,y,z);\n\t\t} else {\n\t\t\tint x,y; cin >> x >> y;\n\t\t\tif(wuf.same(x,y))\
    \ cout << wuf.diff(x,y) << '\\n';\n\t\t\telse cout << '?' << '\\n';\n\t\t}\n\t\
    }\n\n}\n"
  code: "#define PROBLEM \"https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=DSL_1_B\"\
    \n#include <bits/stdc++.h>\n#include \"qitoy/data_structure/weighted_unionfind.hpp\"\
    \nusing namespace std;\n\nint main(){\n\n\tcin.tie(nullptr);\n\tios_base::sync_with_stdio(false);\n\
    \n\tint n,q; cin >> n >> q;\n\tweighted_uf<int> wuf(n);\n\twhile(q--) {\n\t\t\
    int c; cin >> c;\n\t\tif(c==0) {\n\t\t\tint x,y,z; cin >> x >> y >> z;\n\t\t\t\
    wuf.merge(x,y,z);\n\t\t} else {\n\t\t\tint x,y; cin >> x >> y;\n\t\t\tif(wuf.same(x,y))\
    \ cout << wuf.diff(x,y) << '\\n';\n\t\t\telse cout << '?' << '\\n';\n\t\t}\n\t\
    }\n\n}\n"
  dependsOn:
  - qitoy/data_structure/weighted_unionfind.hpp
  isVerificationFile: true
  path: test/aoj/DSL_1_B.test.cpp
  requiredBy: []
  timestamp: '2023-01-01 21:12:37+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: test/aoj/DSL_1_B.test.cpp
layout: document
redirect_from:
- /verify/test/aoj/DSL_1_B.test.cpp
- /verify/test/aoj/DSL_1_B.test.cpp.html
title: test/aoj/DSL_1_B.test.cpp
---
