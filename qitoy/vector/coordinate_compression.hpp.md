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
  bundledCode: "#line 1 \"qitoy/vector/coordinate_compression.hpp\"\ntemplate<class\
    \ T> std::vector<T> coordinate_compression(std::vector<T>& vec) {\n\tstd::vector<T>\
    \ ret(vec);\n\tstd::sort(ret.begin(), ret.end());\n\tret.erase(std::unique(ret.begin(),\
    \ ret.end()),ret.end());\n\tfor (int i = 0; i < (int)vec.size(); i++) \n\t\tvec[i]=std::lower_bound(ret.begin(),\
    \ ret.end(), vec[i])-ret.begin();\n\treturn ret;\n}\n"
  code: "template<class T> std::vector<T> coordinate_compression(std::vector<T>& vec)\
    \ {\n\tstd::vector<T> ret(vec);\n\tstd::sort(ret.begin(), ret.end());\n\tret.erase(std::unique(ret.begin(),\
    \ ret.end()),ret.end());\n\tfor (int i = 0; i < (int)vec.size(); i++) \n\t\tvec[i]=std::lower_bound(ret.begin(),\
    \ ret.end(), vec[i])-ret.begin();\n\treturn ret;\n}\n"
  dependsOn: []
  isVerificationFile: false
  path: qitoy/vector/coordinate_compression.hpp
  requiredBy: []
  timestamp: '2023-01-01 21:12:37+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/library_checker/associative_array.test.cpp
documentation_of: qitoy/vector/coordinate_compression.hpp
layout: document
redirect_from:
- /library/qitoy/vector/coordinate_compression.hpp
- /library/qitoy/vector/coordinate_compression.hpp.html
title: qitoy/vector/coordinate_compression.hpp
---
