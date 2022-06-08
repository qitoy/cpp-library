---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/library_checker/associative_array.test.cpp
    title: test/library_checker/associative_array.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 1 \"vector/coordinate_compression.hpp\"\ntemplate<class T> std::vector<T>\
    \ coordinate_compression(std::vector<T>& vec) {\n\tstd::vector<T> ret(vec);\n\t\
    std::sort(ret.begin(), ret.end());\n\tret.erase(std::unique(ret.begin(), ret.end()),ret.end());\n\
    \tfor (int i = 0; i < (int)vec.size(); i++) \n\t\tvec[i]=std::lower_bound(ret.begin(),\
    \ ret.end(), vec[i])-ret.begin();\n\treturn ret;\n}\n"
  code: "template<class T> std::vector<T> coordinate_compression(std::vector<T>& vec)\
    \ {\n\tstd::vector<T> ret(vec);\n\tstd::sort(ret.begin(), ret.end());\n\tret.erase(std::unique(ret.begin(),\
    \ ret.end()),ret.end());\n\tfor (int i = 0; i < (int)vec.size(); i++) \n\t\tvec[i]=std::lower_bound(ret.begin(),\
    \ ret.end(), vec[i])-ret.begin();\n\treturn ret;\n}\n"
  dependsOn: []
  isVerificationFile: false
  path: vector/coordinate_compression.hpp
  requiredBy: []
  timestamp: '2022-02-10 22:05:11+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/library_checker/associative_array.test.cpp
documentation_of: vector/coordinate_compression.hpp
layout: document
redirect_from:
- /library/vector/coordinate_compression.hpp
- /library/vector/coordinate_compression.hpp.html
title: vector/coordinate_compression.hpp
---
