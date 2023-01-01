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
  bundledCode: "#line 1 \"qitoy/monoid/add_m.hpp\"\ntemplate<class T>\nstruct add_m\
    \ {\n\tusing type=T;\n\tstatic constexpr T op(T a, T b) { return a+b; }\n\tstatic\
    \ constexpr T e() { return 0; }\n};\n"
  code: "template<class T>\nstruct add_m {\n\tusing type=T;\n\tstatic constexpr T\
    \ op(T a, T b) { return a+b; }\n\tstatic constexpr T e() { return 0; }\n};\n"
  dependsOn: []
  isVerificationFile: false
  path: qitoy/monoid/add_m.hpp
  requiredBy: []
  timestamp: '2023-01-01 21:12:37+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/monoid/maybe.test.cpp
documentation_of: qitoy/monoid/add_m.hpp
layout: document
redirect_from:
- /library/qitoy/monoid/add_m.hpp
- /library/qitoy/monoid/add_m.hpp.html
title: qitoy/monoid/add_m.hpp
---
