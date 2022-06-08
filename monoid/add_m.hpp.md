---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/monoid/maybe.test.cpp
    title: test/monoid/maybe.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 1 \"monoid/add_m.hpp\"\ntemplate<class T>\nstruct add_m {\n\t\
    using type=T;\n\tstatic constexpr T op(const T& a, const T& b) { return a+b; }\n\
    \tstatic constexpr T e=0;\n};\n"
  code: "template<class T>\nstruct add_m {\n\tusing type=T;\n\tstatic constexpr T\
    \ op(const T& a, const T& b) { return a+b; }\n\tstatic constexpr T e=0;\n};\n"
  dependsOn: []
  isVerificationFile: false
  path: monoid/add_m.hpp
  requiredBy: []
  timestamp: '2022-02-13 17:08:58+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/monoid/maybe.test.cpp
documentation_of: monoid/add_m.hpp
layout: document
redirect_from:
- /library/monoid/add_m.hpp
- /library/monoid/add_m.hpp.html
title: monoid/add_m.hpp
---
