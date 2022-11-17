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
  bundledCode: "#line 1 \"monoid/pair_m.hpp\"\n#include <utility>\n\ntemplate<class\
    \ M, class N>\nclass maybe {\n\tusing T=std::pair<typename M::type, typename N::type>;\n\
    \n\tpublic:\n\tusing type=T;\n\tstatic constexpr T op(T a, T b) {\n\t\treturn\
    \ {M::op(a.first, b.first), N::op(a.second, b.second)};\n\t}\n\tstatic constexpr\
    \ T e() { return {M::e(), N::e()}; }\n};\n"
  code: "#include <utility>\n\ntemplate<class M, class N>\nclass maybe {\n\tusing\
    \ T=std::pair<typename M::type, typename N::type>;\n\n\tpublic:\n\tusing type=T;\n\
    \tstatic constexpr T op(T a, T b) {\n\t\treturn {M::op(a.first, b.first), N::op(a.second,\
    \ b.second)};\n\t}\n\tstatic constexpr T e() { return {M::e(), N::e()}; }\n};\n"
  dependsOn: []
  isVerificationFile: false
  path: monoid/pair_m.hpp
  requiredBy: []
  timestamp: '2022-11-17 23:31:39+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: monoid/pair_m.hpp
layout: document
redirect_from:
- /library/monoid/pair_m.hpp
- /library/monoid/pair_m.hpp.html
title: monoid/pair_m.hpp
---
