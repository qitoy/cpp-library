---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: qitoy/data_structure/segment_tree.hpp
    title: qitoy/data_structure/segment_tree.hpp
  - icon: ':heavy_check_mark:'
    path: qitoy/monoid/min_m.hpp
    title: qitoy/monoid/min_m.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=DSL_2_A
    links:
    - https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=DSL_2_A
  bundledCode: "#line 1 \"test/aoj/DSL_2_A.test.cpp\"\n#define PROBLEM \"https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=DSL_2_A\"\
    \n#include <bits/stdc++.h>\n#line 3 \"qitoy/data_structure/segment_tree.hpp\"\n\
    \ntemplate<class M>\nclass segment_tree {\n\t\tusing T=typename M::type;\n\n\t\
    public:\n\t\tsegment_tree()=default;\n\t\texplicit segment_tree(int n)\n\t\t\t\
    : _n(n), _vec(2*n, M::e()) { }\n\t\texplicit segment_tree(std::vector<T>& vec)\n\
    \t\t\t: _n(vec.size()), _vec(2*_n) {\n\t\t\t\tfor (int i = 0; i < _n; i++) \n\t\
    \t\t\t\t_vec[_n+i]=vec[i];\n\t\t\t\tfor (int i = _n-1; i > 0; i--)\n\t\t\t\t\t\
    _vec[i]=M::op(_vec[i<<1|0], _vec[i<<1|1]);\n\t\t\t}\n\n\t\tvoid set(int p, T x)\
    \ {\n\t\t\tassert(0<=p and p<_n);\n\t\t\tp+=_n; _vec[p]=x;\n\t\t\twhile(p>1) {\n\
    \t\t\t\tp>>=1;\n\t\t\t\t_vec[p]=M::op(_vec[p<<1|0], _vec[p<<1|1]);\n\t\t\t}\n\t\
    \t}\n\n\t\tvoid add(int p, T x) { set(p, M::op(get(p), x)); }\n\n\t\tT get(int\
    \ p) {\n\t\t\tassert(0<=p and p<_n);\n\t\t\treturn _vec[_n+p];\n\t\t}\n\n\t\t\
    T prod(int l, int r) {\n\t\t\tassert(0<=l and l<=r and r<=_n);\n\t\t\tT ret1=M::e(),\
    \ ret2=M::e();\n\t\t\tl+=_n; r+=_n;\n\t\t\twhile(l<r) {\n\t\t\t\tif(l&1) ret1=M::op(ret1,\
    \ _vec[l++]);\n\t\t\t\tif(r&1) ret2=M::op(_vec[--r], ret2);\n\t\t\t\tl>>=1; r>>=1;\n\
    \t\t\t}\n\t\t\treturn M::op(ret1, ret2);\n\t\t}\n\n\tprivate:\n\t\tint _n;\n\t\
    \tstd::vector<T> _vec;\n};\n#line 3 \"qitoy/monoid/min_m.hpp\"\n\ntemplate<class\
    \ T>\nstruct min_m {\n\tusing type=T;\n\tstatic constexpr T op(T a, T b) { return\
    \ std::min(a,b); }\n\tstatic constexpr T e() { return std::numeric_limits<T>::max();\
    \ }\n};\n#line 5 \"test/aoj/DSL_2_A.test.cpp\"\nusing namespace std;\n\nint main(){\n\
    \n\tcin.tie(nullptr);\n\tios_base::sync_with_stdio(false);\n\n\tint n,q; cin >>\
    \ n >> q;\n\tsegment_tree<min_m<int>> S(n);\n\twhile(q--) {\n\t\tint com, x, y;\
    \ cin >> com >> x >> y;\n\t\tif(com==0) S.set(x,y);\n\t\tif(com==1) cout << S.prod(x,y+1)\
    \ << '\\n';\n\t}\n\n}\n"
  code: "#define PROBLEM \"https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=DSL_2_A\"\
    \n#include <bits/stdc++.h>\n#include \"qitoy/data_structure/segment_tree.hpp\"\
    \n#include \"qitoy/monoid/min_m.hpp\"\nusing namespace std;\n\nint main(){\n\n\
    \tcin.tie(nullptr);\n\tios_base::sync_with_stdio(false);\n\n\tint n,q; cin >>\
    \ n >> q;\n\tsegment_tree<min_m<int>> S(n);\n\twhile(q--) {\n\t\tint com, x, y;\
    \ cin >> com >> x >> y;\n\t\tif(com==0) S.set(x,y);\n\t\tif(com==1) cout << S.prod(x,y+1)\
    \ << '\\n';\n\t}\n\n}\n"
  dependsOn:
  - qitoy/data_structure/segment_tree.hpp
  - qitoy/monoid/min_m.hpp
  isVerificationFile: true
  path: test/aoj/DSL_2_A.test.cpp
  requiredBy: []
  timestamp: '2023-01-01 21:12:37+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: test/aoj/DSL_2_A.test.cpp
layout: document
redirect_from:
- /verify/test/aoj/DSL_2_A.test.cpp
- /verify/test/aoj/DSL_2_A.test.cpp.html
title: test/aoj/DSL_2_A.test.cpp
---
