---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/aoj/DSL_1_B.test.cpp
    title: test/aoj/DSL_1_B.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 1 \"qitoy/data_structure/weighted_unionfind.hpp\"\n#include\
    \ <cassert>\n#include <utility>\n#include <vector>\n\ntemplate<class T>\nstruct\
    \ weighted_uf {\n\tpublic:\n\t\tweighted_uf()=default;\n\t\tweighted_uf(int n)\n\
    \t\t\t: _n(n), parent_or_size(n, -1), diff_weight(n) {}\n\n\t\tbool same(int x,\
    \ int y) {\n\t\t\treturn root(x)==root(y);\n\t\t}\n\n\t\tT diff(int x, int y)\
    \ {\n\t\t\treturn weight(y)-weight(x);\n\t\t}\n\n\t\tbool merge(int x, int y,\
    \ T w) {\n\t\t\tw+=weight(x); w-=weight(y);\n\t\t\tx=root(x); y=root(y);\n\t\t\
    \tif(x==y) return false;\n\t\t\tif(parent_or_size[x]>parent_or_size[y]) std::swap(x,y),\
    \ w=-w;\n\t\t\tparent_or_size[x]+=parent_or_size[y];\n\t\t\tparent_or_size[y]=x;\n\
    \t\t\tdiff_weight[y]=w;\n\t\t\treturn true;\n\t\t}\n\n\tprivate:\n\t\tint _n;\n\
    \t\tstd::vector<int> parent_or_size;\n\t\tstd::vector<T> diff_weight;\n\n\t\t\
    int root(int x) {\n\t\t\tassert(0<=x and x<_n);\n\t\t\tif(parent_or_size[x]<0)\
    \ return x;\n\t\t\tint r=root(parent_or_size[x]);\n\t\t\tdiff_weight[x]+=diff_weight[parent_or_size[x]];\n\
    \t\t\treturn parent_or_size[x]=r;\n\t\t}\n\n\t\tT weight(int x) {\n\t\t\troot(x);\n\
    \t\t\treturn diff_weight[x];\n\t\t}\n};\n"
  code: "#include <cassert>\n#include <utility>\n#include <vector>\n\ntemplate<class\
    \ T>\nstruct weighted_uf {\n\tpublic:\n\t\tweighted_uf()=default;\n\t\tweighted_uf(int\
    \ n)\n\t\t\t: _n(n), parent_or_size(n, -1), diff_weight(n) {}\n\n\t\tbool same(int\
    \ x, int y) {\n\t\t\treturn root(x)==root(y);\n\t\t}\n\n\t\tT diff(int x, int\
    \ y) {\n\t\t\treturn weight(y)-weight(x);\n\t\t}\n\n\t\tbool merge(int x, int\
    \ y, T w) {\n\t\t\tw+=weight(x); w-=weight(y);\n\t\t\tx=root(x); y=root(y);\n\t\
    \t\tif(x==y) return false;\n\t\t\tif(parent_or_size[x]>parent_or_size[y]) std::swap(x,y),\
    \ w=-w;\n\t\t\tparent_or_size[x]+=parent_or_size[y];\n\t\t\tparent_or_size[y]=x;\n\
    \t\t\tdiff_weight[y]=w;\n\t\t\treturn true;\n\t\t}\n\n\tprivate:\n\t\tint _n;\n\
    \t\tstd::vector<int> parent_or_size;\n\t\tstd::vector<T> diff_weight;\n\n\t\t\
    int root(int x) {\n\t\t\tassert(0<=x and x<_n);\n\t\t\tif(parent_or_size[x]<0)\
    \ return x;\n\t\t\tint r=root(parent_or_size[x]);\n\t\t\tdiff_weight[x]+=diff_weight[parent_or_size[x]];\n\
    \t\t\treturn parent_or_size[x]=r;\n\t\t}\n\n\t\tT weight(int x) {\n\t\t\troot(x);\n\
    \t\t\treturn diff_weight[x];\n\t\t}\n};\n"
  dependsOn: []
  isVerificationFile: false
  path: qitoy/data_structure/weighted_unionfind.hpp
  requiredBy: []
  timestamp: '2023-01-01 21:12:37+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/aoj/DSL_1_B.test.cpp
documentation_of: qitoy/data_structure/weighted_unionfind.hpp
layout: document
redirect_from:
- /library/qitoy/data_structure/weighted_unionfind.hpp
- /library/qitoy/data_structure/weighted_unionfind.hpp.html
title: qitoy/data_structure/weighted_unionfind.hpp
---
