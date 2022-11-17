---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: monoid/add_m.hpp
    title: monoid/add_m.hpp
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
    PROBLEM: https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_1_A
    links:
    - https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_1_A
  bundledCode: "#line 1 \"test/monoid/maybe.test.cpp\"\n#define PROBLEM \"https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_1_A\"\
    \n#include <bits/stdc++.h>\n#line 1 \"monoid/add_m.hpp\"\ntemplate<class T>\n\
    struct add_m {\n\tusing type=T;\n\tstatic constexpr T op(T a, T b) { return a+b;\
    \ }\n\tstatic constexpr T e() { return 0; }\n};\n#line 1 \"monoid/maybe.hpp\"\n\
    #include <optional>\n#line 3 \"monoid/maybe.hpp\"\n\ntemplate<class S>\nclass\
    \ maybe {\n\tusing T=std::optional<typename S::type>;\n\n\tpublic:\n\tusing type=T;\n\
    \tstatic constexpr T op(T a, T b) {\n\t\tif(!a) return b;\n\t\tif(!b) return a;\n\
    \t\treturn T(std::in_place, S::op(*a, *b));\n\t}\n\tstatic constexpr T e() { return\
    \ std::nullopt; }\n};\n#line 5 \"test/monoid/maybe.test.cpp\"\nusing namespace\
    \ std;\n\nstruct C {\n\tconstexpr C(int n) : _n(n) {}\n\tconstexpr bool operator==(const\
    \ C& r) const {\n\t\treturn _n==r._n;\n\t}\n\tint _n;\n};\n\ntemplate<class T>\n\
    struct change {\n\tusing type=T;\n\tstatic constexpr T op(T a, T b){ return b;\
    \ }\n};\n\nint main(){\n\n\tcin.tie(nullptr);\n\tios_base::sync_with_stdio(false);\n\
    \n\tusing M=maybe<add_m<int>>;\n\tusing T=typename M::type;\n\n\tstatic_assert(M::e()==nullopt);\n\
    \tstatic_assert(M::op(M::e(), M::e())==M::e());\n\tstatic_assert(M::op(T(1), M::e())==T(1));\n\
    \tstatic_assert(M::op(M::e(), T(2))==T(2));\n\tstatic_assert(M::op(T(1), T(2))==T(3));\n\
    \n\tusing N=maybe<change<C>>;\n\tusing S=typename N::type;\n\tconstexpr C a(114),b(514);\n\
    \n\tstatic_assert(N::op(S(a), N::e())==S(a));\n\tstatic_assert(N::op(N::e(), S(b))==S(b));\n\
    \tstatic_assert(N::op(S(a), S(b))==S(b));\n\n\tcout << \"Hello World\\n\";\n\n\
    }\n"
  code: "#define PROBLEM \"https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_1_A\"\
    \n#include <bits/stdc++.h>\n#include \"monoid/add_m.hpp\"\n#include \"monoid/maybe.hpp\"\
    \nusing namespace std;\n\nstruct C {\n\tconstexpr C(int n) : _n(n) {}\n\tconstexpr\
    \ bool operator==(const C& r) const {\n\t\treturn _n==r._n;\n\t}\n\tint _n;\n\
    };\n\ntemplate<class T>\nstruct change {\n\tusing type=T;\n\tstatic constexpr\
    \ T op(T a, T b){ return b; }\n};\n\nint main(){\n\n\tcin.tie(nullptr);\n\tios_base::sync_with_stdio(false);\n\
    \n\tusing M=maybe<add_m<int>>;\n\tusing T=typename M::type;\n\n\tstatic_assert(M::e()==nullopt);\n\
    \tstatic_assert(M::op(M::e(), M::e())==M::e());\n\tstatic_assert(M::op(T(1), M::e())==T(1));\n\
    \tstatic_assert(M::op(M::e(), T(2))==T(2));\n\tstatic_assert(M::op(T(1), T(2))==T(3));\n\
    \n\tusing N=maybe<change<C>>;\n\tusing S=typename N::type;\n\tconstexpr C a(114),b(514);\n\
    \n\tstatic_assert(N::op(S(a), N::e())==S(a));\n\tstatic_assert(N::op(N::e(), S(b))==S(b));\n\
    \tstatic_assert(N::op(S(a), S(b))==S(b));\n\n\tcout << \"Hello World\\n\";\n\n\
    }\n"
  dependsOn:
  - monoid/add_m.hpp
  - monoid/maybe.hpp
  isVerificationFile: true
  path: test/monoid/maybe.test.cpp
  requiredBy: []
  timestamp: '2022-11-17 23:31:39+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: test/monoid/maybe.test.cpp
layout: document
redirect_from:
- /verify/test/monoid/maybe.test.cpp
- /verify/test/monoid/maybe.test.cpp.html
title: test/monoid/maybe.test.cpp
---
