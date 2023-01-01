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
  bundledCode: "#line 1 \"qitoy/monoid/min_m.hpp\"\n#include <algorithm>\n#include\
    \ <limits>\n\ntemplate<class T>\nstruct min_m {\n\tusing type=T;\n\tstatic constexpr\
    \ T op(T a, T b) { return std::min(a,b); }\n\tstatic constexpr T e() { return\
    \ std::numeric_limits<T>::max(); }\n};\n"
  code: "#include <algorithm>\n#include <limits>\n\ntemplate<class T>\nstruct min_m\
    \ {\n\tusing type=T;\n\tstatic constexpr T op(T a, T b) { return std::min(a,b);\
    \ }\n\tstatic constexpr T e() { return std::numeric_limits<T>::max(); }\n};\n"
  dependsOn: []
  isVerificationFile: false
  path: qitoy/monoid/min_m.hpp
  requiredBy: []
  timestamp: '2023-01-01 21:12:37+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/aoj/DSL_2_A.test.cpp
documentation_of: qitoy/monoid/min_m.hpp
layout: document
redirect_from:
- /library/qitoy/monoid/min_m.hpp
- /library/qitoy/monoid/min_m.hpp.html
title: qitoy/monoid/min_m.hpp
---
