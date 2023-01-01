---
data:
  _extendedDependsOn: []
  _extendedRequiredBy:
  - icon: ':heavy_check_mark:'
    path: qitoy/prime/factorize.hpp
    title: qitoy/prime/factorize.hpp
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/prime/factorize.test.cpp
    title: test/prime/factorize.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 1 \"qitoy/prime/test.hpp\"\n/*{{{ prime_test */\nconstexpr bool\
    \ prime_test(const long long N) { // Miller-Rabin test\n\tif(N<=2) return N==2;\n\
    \tif(N%2==0) return false;\n\tlong long d=N-1;\n\tint r=0;\n\twhile(d%2==0) {d>>=1;\
    \ r++;}\n\tfor(long long a : {2, 325, 9375, 28178, 450775, 9780504, 1795265022})\
    \ {\n\t\tif(a%N==0) return true;\n\t\tlong long x=1;\n\t\tfor(long long t=d; t;\
    \ t>>=1) { // x=a^d mod N\n\t\t\tif(t%2==1) x=(__int128)x*a%N;\n\t\t\ta=(__int128)a*a%N;\n\
    \t\t}\n\t\tif(x==1 or x==N-1) continue;\n\t\tfor(int i=0; i<r; i++) {\n\t\t\t\
    x=(__int128)x*x%N;\n\t\t\tif(x==N-1) break;\n\t\t\tif(x==1 or i==r-1) return false;\n\
    \t\t}\n\t}\n\treturn true;\n}\n/*}}}*/\n"
  code: "/*{{{ prime_test */\nconstexpr bool prime_test(const long long N) { // Miller-Rabin\
    \ test\n\tif(N<=2) return N==2;\n\tif(N%2==0) return false;\n\tlong long d=N-1;\n\
    \tint r=0;\n\twhile(d%2==0) {d>>=1; r++;}\n\tfor(long long a : {2, 325, 9375,\
    \ 28178, 450775, 9780504, 1795265022}) {\n\t\tif(a%N==0) return true;\n\t\tlong\
    \ long x=1;\n\t\tfor(long long t=d; t; t>>=1) { // x=a^d mod N\n\t\t\tif(t%2==1)\
    \ x=(__int128)x*a%N;\n\t\t\ta=(__int128)a*a%N;\n\t\t}\n\t\tif(x==1 or x==N-1)\
    \ continue;\n\t\tfor(int i=0; i<r; i++) {\n\t\t\tx=(__int128)x*x%N;\n\t\t\tif(x==N-1)\
    \ break;\n\t\t\tif(x==1 or i==r-1) return false;\n\t\t}\n\t}\n\treturn true;\n\
    }\n/*}}}*/\n"
  dependsOn: []
  isVerificationFile: false
  path: qitoy/prime/test.hpp
  requiredBy:
  - qitoy/prime/factorize.hpp
  timestamp: '2023-01-01 21:12:37+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/prime/factorize.test.cpp
documentation_of: qitoy/prime/test.hpp
layout: document
redirect_from:
- /library/qitoy/prime/test.hpp
- /library/qitoy/prime/test.hpp.html
title: qitoy/prime/test.hpp
---
