---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/aoj/DSL_2_D.test.cpp
    title: test/aoj/DSL_2_D.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 1 \"data_structure/dual_segment_tree.hpp\"\n#include <cassert>\n\
    #include <vector>\n\ntemplate<class M>\nclass dual_segtree {\n\tprivate:\n\t\t\
    using T=typename M::type;\n\n\tpublic:\n\t\tusing type=T;\n\n\t\tdual_segtree()=default;\n\
    \t\texplicit dual_segtree(int n)\n\t\t\t: _n(n), _vec(2*n, M::e()) {}\n\n\t\t\
    void add(int l, int r, T x) {\n\t\t\tassert(0<=l and l<r and r<=_n);\n\t\t\tl+=_n;\
    \ r+=_n;\n\t\t\tprepare(l); prepare(r);\n\t\t\twhile(l<r) {\n\t\t\t\tif(l&1) adapt(_vec[l++],\
    \ x);\n\t\t\t\tif(r&1) adapt(_vec[--r], x);\n\t\t\t\tl>>=1; r>>=1;\n\t\t\t}\n\t\
    \t}\n\n\t\tT get(int p) {\n\t\t\tassert(0<=p and p<_n);\n\t\t\tp+=_n;\n\t\t\t\
    T ret=M::e();\n\t\t\twhile(p>0) {\n\t\t\t\tadapt(ret, _vec[p]);\n\t\t\t\tp>>=1;\n\
    \t\t\t}\n\t\t\treturn ret;\n\t\t}\n\n\tprivate:\n\t\tint _n;\n\t\tstd::vector<T>\
    \ _vec;\n\n\t\tvoid adapt(T& f, T g) { f=M::op(f, g); }\n\n\t\tvoid push(int p)\
    \ {\n\t\t\tadapt(_vec[p<<1|0], _vec[p]);\n\t\t\tadapt(_vec[p<<1|1], _vec[p]);\n\
    \t\t\t_vec[p]=M::e();\n\t\t}\n\n\t\tvoid prepare(int p) {\n\t\t\tif(p==0) return;\n\
    \t\t\twhile((p&1)==0) p>>=1;\n\t\t\tfor(int i=31-__builtin_clz(p); i>0; i--)\n\
    \t\t\t\tpush(p>>i);\n\t\t}\n};\n"
  code: "#include <cassert>\n#include <vector>\n\ntemplate<class M>\nclass dual_segtree\
    \ {\n\tprivate:\n\t\tusing T=typename M::type;\n\n\tpublic:\n\t\tusing type=T;\n\
    \n\t\tdual_segtree()=default;\n\t\texplicit dual_segtree(int n)\n\t\t\t: _n(n),\
    \ _vec(2*n, M::e()) {}\n\n\t\tvoid add(int l, int r, T x) {\n\t\t\tassert(0<=l\
    \ and l<r and r<=_n);\n\t\t\tl+=_n; r+=_n;\n\t\t\tprepare(l); prepare(r);\n\t\t\
    \twhile(l<r) {\n\t\t\t\tif(l&1) adapt(_vec[l++], x);\n\t\t\t\tif(r&1) adapt(_vec[--r],\
    \ x);\n\t\t\t\tl>>=1; r>>=1;\n\t\t\t}\n\t\t}\n\n\t\tT get(int p) {\n\t\t\tassert(0<=p\
    \ and p<_n);\n\t\t\tp+=_n;\n\t\t\tT ret=M::e();\n\t\t\twhile(p>0) {\n\t\t\t\t\
    adapt(ret, _vec[p]);\n\t\t\t\tp>>=1;\n\t\t\t}\n\t\t\treturn ret;\n\t\t}\n\n\t\
    private:\n\t\tint _n;\n\t\tstd::vector<T> _vec;\n\n\t\tvoid adapt(T& f, T g) {\
    \ f=M::op(f, g); }\n\n\t\tvoid push(int p) {\n\t\t\tadapt(_vec[p<<1|0], _vec[p]);\n\
    \t\t\tadapt(_vec[p<<1|1], _vec[p]);\n\t\t\t_vec[p]=M::e();\n\t\t}\n\n\t\tvoid\
    \ prepare(int p) {\n\t\t\tif(p==0) return;\n\t\t\twhile((p&1)==0) p>>=1;\n\t\t\
    \tfor(int i=31-__builtin_clz(p); i>0; i--)\n\t\t\t\tpush(p>>i);\n\t\t}\n};\n"
  dependsOn: []
  isVerificationFile: false
  path: data_structure/dual_segment_tree.hpp
  requiredBy: []
  timestamp: '2022-11-17 23:40:02+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/aoj/DSL_2_D.test.cpp
documentation_of: data_structure/dual_segment_tree.hpp
layout: document
redirect_from:
- /library/data_structure/dual_segment_tree.hpp
- /library/data_structure/dual_segment_tree.hpp.html
title: data_structure/dual_segment_tree.hpp
---
