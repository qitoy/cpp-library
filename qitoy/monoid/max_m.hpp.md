---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':warning:'
  attributes:
    links: []
  bundledCode: "#line 1 \"qitoy/monoid/max_m.hpp\"\n#include <algorithm>\n#include\
    \ <limits>\n\ntemplate<class T>\nstruct max_m {\n\tusing type=T;\n\tstatic constexpr\
    \ T op(T a, T b) { return std::max(a,b); }\n\tstatic constexpr T e() { return\
    \ std::numeric_limits<T>::min(); }\n};\n"
  code: "#include <algorithm>\n#include <limits>\n\ntemplate<class T>\nstruct max_m\
    \ {\n\tusing type=T;\n\tstatic constexpr T op(T a, T b) { return std::max(a,b);\
    \ }\n\tstatic constexpr T e() { return std::numeric_limits<T>::min(); }\n};\n"
  dependsOn: []
  isVerificationFile: false
  path: qitoy/monoid/max_m.hpp
  requiredBy: []
  timestamp: '2023-01-01 21:12:37+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: qitoy/monoid/max_m.hpp
layout: document
redirect_from:
- /library/qitoy/monoid/max_m.hpp
- /library/qitoy/monoid/max_m.hpp.html
title: qitoy/monoid/max_m.hpp
---
