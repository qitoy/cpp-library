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
  bundledCode: "#line 1 \"monoid/max_m.hpp\"\n#include <algorithm>\n#include <limits>\n\
    \ntemplate<class T>\nstruct max_m {\n\tusing type=T;\n\tstatic constexpr T op(const\
    \ T& a, const T& b) { return std::max(a,b); }\n\tstatic constexpr T e=std::numeric_limits<T>::min();\n\
    };\n"
  code: "#include <algorithm>\n#include <limits>\n\ntemplate<class T>\nstruct max_m\
    \ {\n\tusing type=T;\n\tstatic constexpr T op(const T& a, const T& b) { return\
    \ std::max(a,b); }\n\tstatic constexpr T e=std::numeric_limits<T>::min();\n};\n"
  dependsOn: []
  isVerificationFile: false
  path: monoid/max_m.hpp
  requiredBy: []
  timestamp: '2022-04-16 05:03:52+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: monoid/max_m.hpp
layout: document
redirect_from:
- /library/monoid/max_m.hpp
- /library/monoid/max_m.hpp.html
title: monoid/max_m.hpp
---
