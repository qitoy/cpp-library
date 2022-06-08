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
  bundledCode: "#line 1 \"monoid/mod_m.hpp\"\ntemplate<int mod>\nstruct mod_m {\n\t\
    using type=int;\n\tstatic constexpr int op(const int a, const int b) {\n\t\treturn\
    \ (a+b)%mod;\n\t}\n\tstatic constexpr int e=0;\n};\n"
  code: "template<int mod>\nstruct mod_m {\n\tusing type=int;\n\tstatic constexpr\
    \ int op(const int a, const int b) {\n\t\treturn (a+b)%mod;\n\t}\n\tstatic constexpr\
    \ int e=0;\n};\n"
  dependsOn: []
  isVerificationFile: false
  path: monoid/mod_m.hpp
  requiredBy: []
  timestamp: '2022-02-15 20:49:54+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: monoid/mod_m.hpp
layout: document
redirect_from:
- /library/monoid/mod_m.hpp
- /library/monoid/mod_m.hpp.html
title: monoid/mod_m.hpp
---
