---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/aoj/DSL_2_D.test.cpp
    title: test/aoj/DSL_2_D.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/monoid/maybe.test.cpp
    title: test/monoid/maybe.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 1 \"qitoy/monoid/maybe.hpp\"\n#include <optional>\n#include\
    \ <utility>\n\ntemplate<class S>\nclass maybe {\n\tusing T=std::optional<typename\
    \ S::type>;\n\n\tpublic:\n\tusing type=T;\n\tstatic constexpr T op(T a, T b) {\n\
    \t\tif(!a) return b;\n\t\tif(!b) return a;\n\t\treturn T(std::in_place, S::op(*a,\
    \ *b));\n\t}\n\tstatic constexpr T e() { return std::nullopt; }\n};\n"
  code: "#include <optional>\n#include <utility>\n\ntemplate<class S>\nclass maybe\
    \ {\n\tusing T=std::optional<typename S::type>;\n\n\tpublic:\n\tusing type=T;\n\
    \tstatic constexpr T op(T a, T b) {\n\t\tif(!a) return b;\n\t\tif(!b) return a;\n\
    \t\treturn T(std::in_place, S::op(*a, *b));\n\t}\n\tstatic constexpr T e() { return\
    \ std::nullopt; }\n};\n"
  dependsOn: []
  isVerificationFile: false
  path: qitoy/monoid/maybe.hpp
  requiredBy: []
  timestamp: '2023-01-01 21:12:37+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/aoj/DSL_2_D.test.cpp
  - test/monoid/maybe.test.cpp
documentation_of: qitoy/monoid/maybe.hpp
layout: document
redirect_from:
- /library/qitoy/monoid/maybe.hpp
- /library/qitoy/monoid/maybe.hpp.html
title: qitoy/monoid/maybe.hpp
---
