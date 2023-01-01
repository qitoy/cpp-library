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
  bundledCode: "#line 1 \"qitoy/monoid/mod_m.hpp\"\ntemplate<int mod>\nstruct mod_m\
    \ {\n\tusing type=int;\n\tstatic constexpr int op(int a, int b) {\n\t\treturn\
    \ (a+b)%mod;\n\t}\n\tstatic constexpr int e() { return 0; }\n};\n"
  code: "template<int mod>\nstruct mod_m {\n\tusing type=int;\n\tstatic constexpr\
    \ int op(int a, int b) {\n\t\treturn (a+b)%mod;\n\t}\n\tstatic constexpr int e()\
    \ { return 0; }\n};\n"
  dependsOn: []
  isVerificationFile: false
  path: qitoy/monoid/mod_m.hpp
  requiredBy: []
  timestamp: '2023-01-01 21:12:37+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: qitoy/monoid/mod_m.hpp
layout: document
redirect_from:
- /library/qitoy/monoid/mod_m.hpp
- /library/qitoy/monoid/mod_m.hpp.html
title: qitoy/monoid/mod_m.hpp
---
