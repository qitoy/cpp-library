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
  bundledCode: "#line 1 \"qitoy/utility/RLE.hpp\"\n#include <utility>\n#include <vector>\n\
    \ntemplate<class Iter> auto RLE(Iter first, Iter last) {\n    std::vector<std::pair<typename\
    \ Iter::value_type,int>> r;\n    int cnt=0;\n    for(; first!=last; first++) {\n\
    \        cnt++;\n        if(first==prev(last) or *first!=*next(first)) {\n   \
    \         r.emplace_back(*first, cnt);\n            cnt=0;\n        }\n    }\n\
    \    return r;\n}\n"
  code: "#include <utility>\n#include <vector>\n\ntemplate<class Iter> auto RLE(Iter\
    \ first, Iter last) {\n    std::vector<std::pair<typename Iter::value_type,int>>\
    \ r;\n    int cnt=0;\n    for(; first!=last; first++) {\n        cnt++;\n    \
    \    if(first==prev(last) or *first!=*next(first)) {\n            r.emplace_back(*first,\
    \ cnt);\n            cnt=0;\n        }\n    }\n    return r;\n}\n"
  dependsOn: []
  isVerificationFile: false
  path: qitoy/utility/RLE.hpp
  requiredBy: []
  timestamp: '2023-01-01 21:12:37+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: qitoy/utility/RLE.hpp
layout: document
redirect_from:
- /library/qitoy/utility/RLE.hpp
- /library/qitoy/utility/RLE.hpp.html
title: qitoy/utility/RLE.hpp
---
