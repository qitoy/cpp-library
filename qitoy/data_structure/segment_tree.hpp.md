---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/aoj/DSL_2_A.test.cpp
    title: test/aoj/DSL_2_A.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/library_checker/point_set_range_composite.test.cpp
    title: test/library_checker/point_set_range_composite.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 1 \"qitoy/data_structure/segment_tree.hpp\"\n#include <cassert>\n\
    #include <vector>\n\ntemplate<class M>\nclass segment_tree {\n\t\tusing T=typename\
    \ M::type;\n\n\tpublic:\n\t\tsegment_tree()=default;\n\t\texplicit segment_tree(int\
    \ n)\n\t\t\t: _n(n), _vec(2*n, M::e()) { }\n\t\texplicit segment_tree(std::vector<T>&\
    \ vec)\n\t\t\t: _n(vec.size()), _vec(2*_n) {\n\t\t\t\tfor (int i = 0; i < _n;\
    \ i++) \n\t\t\t\t\t_vec[_n+i]=vec[i];\n\t\t\t\tfor (int i = _n-1; i > 0; i--)\n\
    \t\t\t\t\t_vec[i]=M::op(_vec[i<<1|0], _vec[i<<1|1]);\n\t\t\t}\n\n\t\tvoid set(int\
    \ p, T x) {\n\t\t\tassert(0<=p and p<_n);\n\t\t\tp+=_n; _vec[p]=x;\n\t\t\twhile(p>1)\
    \ {\n\t\t\t\tp>>=1;\n\t\t\t\t_vec[p]=M::op(_vec[p<<1|0], _vec[p<<1|1]);\n\t\t\t\
    }\n\t\t}\n\n\t\tvoid add(int p, T x) { set(p, M::op(get(p), x)); }\n\n\t\tT get(int\
    \ p) {\n\t\t\tassert(0<=p and p<_n);\n\t\t\treturn _vec[_n+p];\n\t\t}\n\n\t\t\
    T prod(int l, int r) {\n\t\t\tassert(0<=l and l<=r and r<=_n);\n\t\t\tT ret1=M::e(),\
    \ ret2=M::e();\n\t\t\tl+=_n; r+=_n;\n\t\t\twhile(l<r) {\n\t\t\t\tif(l&1) ret1=M::op(ret1,\
    \ _vec[l++]);\n\t\t\t\tif(r&1) ret2=M::op(_vec[--r], ret2);\n\t\t\t\tl>>=1; r>>=1;\n\
    \t\t\t}\n\t\t\treturn M::op(ret1, ret2);\n\t\t}\n\n\tprivate:\n\t\tint _n;\n\t\
    \tstd::vector<T> _vec;\n};\n"
  code: "#include <cassert>\n#include <vector>\n\ntemplate<class M>\nclass segment_tree\
    \ {\n\t\tusing T=typename M::type;\n\n\tpublic:\n\t\tsegment_tree()=default;\n\
    \t\texplicit segment_tree(int n)\n\t\t\t: _n(n), _vec(2*n, M::e()) { }\n\t\texplicit\
    \ segment_tree(std::vector<T>& vec)\n\t\t\t: _n(vec.size()), _vec(2*_n) {\n\t\t\
    \t\tfor (int i = 0; i < _n; i++) \n\t\t\t\t\t_vec[_n+i]=vec[i];\n\t\t\t\tfor (int\
    \ i = _n-1; i > 0; i--)\n\t\t\t\t\t_vec[i]=M::op(_vec[i<<1|0], _vec[i<<1|1]);\n\
    \t\t\t}\n\n\t\tvoid set(int p, T x) {\n\t\t\tassert(0<=p and p<_n);\n\t\t\tp+=_n;\
    \ _vec[p]=x;\n\t\t\twhile(p>1) {\n\t\t\t\tp>>=1;\n\t\t\t\t_vec[p]=M::op(_vec[p<<1|0],\
    \ _vec[p<<1|1]);\n\t\t\t}\n\t\t}\n\n\t\tvoid add(int p, T x) { set(p, M::op(get(p),\
    \ x)); }\n\n\t\tT get(int p) {\n\t\t\tassert(0<=p and p<_n);\n\t\t\treturn _vec[_n+p];\n\
    \t\t}\n\n\t\tT prod(int l, int r) {\n\t\t\tassert(0<=l and l<=r and r<=_n);\n\t\
    \t\tT ret1=M::e(), ret2=M::e();\n\t\t\tl+=_n; r+=_n;\n\t\t\twhile(l<r) {\n\t\t\
    \t\tif(l&1) ret1=M::op(ret1, _vec[l++]);\n\t\t\t\tif(r&1) ret2=M::op(_vec[--r],\
    \ ret2);\n\t\t\t\tl>>=1; r>>=1;\n\t\t\t}\n\t\t\treturn M::op(ret1, ret2);\n\t\t\
    }\n\n\tprivate:\n\t\tint _n;\n\t\tstd::vector<T> _vec;\n};\n"
  dependsOn: []
  isVerificationFile: false
  path: qitoy/data_structure/segment_tree.hpp
  requiredBy: []
  timestamp: '2023-01-01 21:12:37+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/aoj/DSL_2_A.test.cpp
  - test/library_checker/point_set_range_composite.test.cpp
documentation_of: qitoy/data_structure/segment_tree.hpp
layout: document
redirect_from:
- /library/qitoy/data_structure/segment_tree.hpp
- /library/qitoy/data_structure/segment_tree.hpp.html
title: qitoy/data_structure/segment_tree.hpp
---
