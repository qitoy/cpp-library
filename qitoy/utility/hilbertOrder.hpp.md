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
  bundledCode: "#line 1 \"qitoy/utility/hilbertOrder.hpp\"\n#include <utility>\n\n\
    long long hilbertOrder(int k, int x, int y) {\n    long long d=0;\n    for(int\
    \ i=k-1; i>=0; i--) {\n        int rx=x>>i&1, ry=y>>i&1;\n        d+=(1LL<<2*i)*(3*rx^ry);\n\
    \        if(ry==0) {\n            if(rx==1) {\n                x=(1<<k)-1-x;\n\
    \                y=(1<<k)-1-y;\n            }\n            std::swap(x,y);\n \
    \       }\n    }\n    return d;\n}\n"
  code: "#include <utility>\n\nlong long hilbertOrder(int k, int x, int y) {\n   \
    \ long long d=0;\n    for(int i=k-1; i>=0; i--) {\n        int rx=x>>i&1, ry=y>>i&1;\n\
    \        d+=(1LL<<2*i)*(3*rx^ry);\n        if(ry==0) {\n            if(rx==1)\
    \ {\n                x=(1<<k)-1-x;\n                y=(1<<k)-1-y;\n          \
    \  }\n            std::swap(x,y);\n        }\n    }\n    return d;\n}\n"
  dependsOn: []
  isVerificationFile: false
  path: qitoy/utility/hilbertOrder.hpp
  requiredBy: []
  timestamp: '2023-01-01 21:12:37+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: qitoy/utility/hilbertOrder.hpp
layout: document
redirect_from:
- /library/qitoy/utility/hilbertOrder.hpp
- /library/qitoy/utility/hilbertOrder.hpp.html
title: qitoy/utility/hilbertOrder.hpp
---
