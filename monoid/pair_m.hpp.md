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
  bundledCode: "#line 1 \"monoid/pair_m.hpp\"\ntemplate<class M, class N>\nclass maybe\
    \ {\n\tusing T=std::pair<typename M::type, typename N::type>;\n\n\tpublic:\n\t\
    using type=T;\n\tstatic constexpr T op(const T& a, const T& b) {\n\t\treturn T(M::op(a.first,\
    \ b.first), N::op(a.second, b.second));\n\t}\n\tstatic constexpr T e(M::e, N::e);\n\
    };\n"
  code: "template<class M, class N>\nclass maybe {\n\tusing T=std::pair<typename M::type,\
    \ typename N::type>;\n\n\tpublic:\n\tusing type=T;\n\tstatic constexpr T op(const\
    \ T& a, const T& b) {\n\t\treturn T(M::op(a.first, b.first), N::op(a.second, b.second));\n\
    \t}\n\tstatic constexpr T e(M::e, N::e);\n};\n"
  dependsOn: []
  isVerificationFile: false
  path: monoid/pair_m.hpp
  requiredBy: []
  timestamp: '2022-02-15 20:49:54+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: monoid/pair_m.hpp
layout: document
redirect_from:
- /library/monoid/pair_m.hpp
- /library/monoid/pair_m.hpp.html
title: monoid/pair_m.hpp
---
