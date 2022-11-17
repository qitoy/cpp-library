---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':x:'
    path: test/aoj/DSL_2_A.test.cpp
    title: test/aoj/DSL_2_A.test.cpp
  _isVerificationFailed: true
  _pathExtension: hpp
  _verificationStatusIcon: ':x:'
  attributes:
    links: []
  bundledCode: "#line 1 \"monoid/min_m.hpp\"\n#include <algorithm>\n#include <limits>\n\
    \ntemplate<class T>\nstruct min_m {\n\tusing type=T;\n\tstatic constexpr T op(const\
    \ T& a, const T& b) { return std::min(a,b); }\n\tstatic constexpr T e=std::numeric_limits<T>::max();\n\
    };\n"
  code: "#include <algorithm>\n#include <limits>\n\ntemplate<class T>\nstruct min_m\
    \ {\n\tusing type=T;\n\tstatic constexpr T op(const T& a, const T& b) { return\
    \ std::min(a,b); }\n\tstatic constexpr T e=std::numeric_limits<T>::max();\n};\n"
  dependsOn: []
  isVerificationFile: false
  path: monoid/min_m.hpp
  requiredBy: []
  timestamp: '2022-11-17 23:31:39+09:00'
  verificationStatus: LIBRARY_ALL_WA
  verifiedWith:
  - test/aoj/DSL_2_A.test.cpp
documentation_of: monoid/min_m.hpp
layout: document
redirect_from:
- /library/monoid/min_m.hpp
- /library/monoid/min_m.hpp.html
title: monoid/min_m.hpp
---
