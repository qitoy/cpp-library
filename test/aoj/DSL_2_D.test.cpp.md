---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: data_structure/dual_segment_tree.hpp
    title: data_structure/dual_segment_tree.hpp
  - icon: ':heavy_check_mark:'
    path: monoid/maybe.hpp
    title: monoid/maybe.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=DSL_2_D
    links:
    - https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=DSL_2_D
  bundledCode: "#line 1 \"test/aoj/DSL_2_D.test.cpp\"\n#define PROBLEM \"https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=DSL_2_D\"\
    \n#include <bits/stdc++.h>\n#line 3 \"data_structure/dual_segment_tree.hpp\"\n\
    \ntemplate<class M>\nclass dual_segtree {\n\tprivate:\n\t\tusing T=typename M::type;\n\
    \n\tpublic:\n\t\tusing type=T;\n\n\t\tdual_segtree()=default;\n\t\texplicit dual_segtree(int\
    \ n)\n\t\t\t: _n(n), _vec(2*n, M::e) {}\n\n\t\tvoid add(int l, int r, T x) {\n\
    \t\t\tassert(0<=l and l<r and r<=_n);\n\t\t\tl+=_n; r+=_n;\n\t\t\tprepare(l);\
    \ prepare(r);\n\t\t\twhile(l<r) {\n\t\t\t\tif(l&1) adapt(_vec[l++], x);\n\t\t\t\
    \tif(r&1) adapt(_vec[--r], x);\n\t\t\t\tl>>=1; r>>=1;\n\t\t\t}\n\t\t}\n\n\t\t\
    T get(int p) {\n\t\t\tassert(0<=p and p<_n);\n\t\t\tp+=_n;\n\t\t\tT ret=M::e;\n\
    \t\t\twhile(p>0) {\n\t\t\t\tadapt(ret, _vec[p]);\n\t\t\t\tp>>=1;\n\t\t\t}\n\t\t\
    \treturn ret;\n\t\t}\n\n\tprivate:\n\t\tint _n;\n\t\tstd::vector<T> _vec;\n\n\t\
    \tvoid adapt(T& f, T g) { f=M::op(f, g); }\n\n\t\tvoid push(int p) {\n\t\t\tadapt(_vec[p<<1|0],\
    \ _vec[p]);\n\t\t\tadapt(_vec[p<<1|1], _vec[p]);\n\t\t\t_vec[p]=M::e;\n\t\t}\n\
    \n\t\tvoid prepare(int p) {\n\t\t\tif(p==0) return;\n\t\t\twhile((p&1)==0) p>>=1;\n\
    \t\t\tfor(int i=31-__builtin_clz(p); i>0; i--)\n\t\t\t\tpush(p>>i);\n\t\t}\n};\n\
    #line 1 \"monoid/maybe.hpp\"\n#include <optional>\n#line 3 \"monoid/maybe.hpp\"\
    \n\ntemplate<class S>\nclass maybe {\n\tusing T=std::optional<typename S::type>;\n\
    \n\tpublic:\n\tusing type=T;\n\tstatic constexpr T op(const T& a, const T& b)\
    \ noexcept {\n\t\tif(!a) return b;\n\t\tif(!b) return a;\n\t\treturn T(std::in_place,\
    \ S::op(*a, *b));\n\t}\n\tstatic constexpr T e=std::nullopt;\n};\n#line 5 \"test/aoj/DSL_2_D.test.cpp\"\
    \nusing namespace std;\n\ntemplate<class T>\nstruct change {\n\tusing type=T;\n\
    \tstatic constexpr T op(T a, T b) { return b; }\n};\n\nint main(){\n\n\tcin.tie(nullptr);\n\
    \tios_base::sync_with_stdio(false);\n\n\tint n,q; cin >> n >> q;\n\tdual_segtree<maybe<change<int>>>\
    \ S(n);\n\twhile(q--) {\n\t\tint com; cin >> com;\n\t\tif(com==0) {\n\t\t\tint\
    \ s,t,x; cin >> s >> t >> x;\n\t\t\tS.add(s,t+1,x);\n\t\t}\n\t\tif(com==1) {\n\
    \t\t\tint i; cin >> i;\n\t\t\tdecltype(S)::type ret=S.get(i);\n\t\t\tcout << (ret?*ret:numeric_limits<int>::max())\
    \ << '\\n';\n\t\t}\n\t}\n\n}\n"
  code: "#define PROBLEM \"https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=DSL_2_D\"\
    \n#include <bits/stdc++.h>\n#include \"data_structure/dual_segment_tree.hpp\"\n\
    #include \"monoid/maybe.hpp\"\nusing namespace std;\n\ntemplate<class T>\nstruct\
    \ change {\n\tusing type=T;\n\tstatic constexpr T op(T a, T b) { return b; }\n\
    };\n\nint main(){\n\n\tcin.tie(nullptr);\n\tios_base::sync_with_stdio(false);\n\
    \n\tint n,q; cin >> n >> q;\n\tdual_segtree<maybe<change<int>>> S(n);\n\twhile(q--)\
    \ {\n\t\tint com; cin >> com;\n\t\tif(com==0) {\n\t\t\tint s,t,x; cin >> s >>\
    \ t >> x;\n\t\t\tS.add(s,t+1,x);\n\t\t}\n\t\tif(com==1) {\n\t\t\tint i; cin >>\
    \ i;\n\t\t\tdecltype(S)::type ret=S.get(i);\n\t\t\tcout << (ret?*ret:numeric_limits<int>::max())\
    \ << '\\n';\n\t\t}\n\t}\n\n}\n"
  dependsOn:
  - data_structure/dual_segment_tree.hpp
  - monoid/maybe.hpp
  isVerificationFile: true
  path: test/aoj/DSL_2_D.test.cpp
  requiredBy: []
  timestamp: '2022-06-08 13:10:37+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: test/aoj/DSL_2_D.test.cpp
layout: document
redirect_from:
- /verify/test/aoj/DSL_2_D.test.cpp
- /verify/test/aoj/DSL_2_D.test.cpp.html
title: test/aoj/DSL_2_D.test.cpp
---
