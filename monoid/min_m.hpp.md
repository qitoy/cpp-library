---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/aoj/DSL_2_A.test.cpp
    title: test/aoj/DSL_2_A.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 1 \"monoid/min_m.hpp\"\ntemplate<class T>\nstruct min_m {\n\t\
    using type=T;\n\tstatic constexpr T op(const T& a, const T& b) { return std::min(a,b);\
    \ }\n\tstatic constexpr T e=std::numeric_limits<T>::max();\n};\n"
  code: "template<class T>\nstruct min_m {\n\tusing type=T;\n\tstatic constexpr T\
    \ op(const T& a, const T& b) { return std::min(a,b); }\n\tstatic constexpr T e=std::numeric_limits<T>::max();\n\
    };\n"
  dependsOn: []
  isVerificationFile: false
  path: monoid/min_m.hpp
  requiredBy: []
  timestamp: '2022-02-13 17:08:58+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/aoj/DSL_2_A.test.cpp
documentation_of: monoid/min_m.hpp
layout: document
redirect_from:
- /library/monoid/min_m.hpp
- /library/monoid/min_m.hpp.html
title: monoid/min_m.hpp
---
