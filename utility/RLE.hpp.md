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
  bundledCode: "#line 1 \"utility/RLE.hpp\"\n#include <utility>\n#include <vector>\n\
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
  path: utility/RLE.hpp
  requiredBy: []
  timestamp: '2022-11-07 19:59:32+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: utility/RLE.hpp
layout: document
redirect_from:
- /library/utility/RLE.hpp
- /library/utility/RLE.hpp.html
title: utility/RLE.hpp
---
