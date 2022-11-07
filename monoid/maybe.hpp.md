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
  bundledCode: "#line 1 \"monoid/maybe.hpp\"\n#include <optional>\n#include <utility>\n\
    \ntemplate<class S>\nclass maybe {\n\tusing T=std::optional<typename S::type>;\n\
    \n\tpublic:\n\tusing type=T;\n\tstatic constexpr T op(const T& a, const T& b)\
    \ noexcept {\n\t\tif(!a) return b;\n\t\tif(!b) return a;\n\t\treturn T(std::in_place,\
    \ S::op(*a, *b));\n\t}\n\tstatic constexpr T e=std::nullopt;\n};\n"
  code: "#include <optional>\n#include <utility>\n\ntemplate<class S>\nclass maybe\
    \ {\n\tusing T=std::optional<typename S::type>;\n\n\tpublic:\n\tusing type=T;\n\
    \tstatic constexpr T op(const T& a, const T& b) noexcept {\n\t\tif(!a) return\
    \ b;\n\t\tif(!b) return a;\n\t\treturn T(std::in_place, S::op(*a, *b));\n\t}\n\
    \tstatic constexpr T e=std::nullopt;\n};\n"
  dependsOn: []
  isVerificationFile: false
  path: monoid/maybe.hpp
  requiredBy: []
  timestamp: '2022-06-08 13:10:37+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/monoid/maybe.test.cpp
  - test/aoj/DSL_2_D.test.cpp
documentation_of: monoid/maybe.hpp
layout: document
redirect_from:
- /library/monoid/maybe.hpp
- /library/monoid/maybe.hpp.html
title: monoid/maybe.hpp
---
