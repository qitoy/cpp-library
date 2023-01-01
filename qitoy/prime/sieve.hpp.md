---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/prime/sieve.test.cpp
    title: test/prime/sieve.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 1 \"qitoy/prime/sieve.hpp\"\n/*{{{ prime_sieve */\nstd::vector<bool>\
    \ prime_sieve(int N) {\n\tstd::vector<bool> _isPrime(N+1, true);\n\t_isPrime[0]=_isPrime[1]=false;\n\
    \tfor(int i=4; i<=N; i+=2) _isPrime[i]=false;\n\tfor(int i=3; i*i<=N; i+=2) if(_isPrime[i])\
    \ \n\t\tfor(int j=i; i*j<=N; j+=2) _isPrime[i*j]=false;\n\treturn _isPrime;\n\
    }\n/*}}}*/\n"
  code: "/*{{{ prime_sieve */\nstd::vector<bool> prime_sieve(int N) {\n\tstd::vector<bool>\
    \ _isPrime(N+1, true);\n\t_isPrime[0]=_isPrime[1]=false;\n\tfor(int i=4; i<=N;\
    \ i+=2) _isPrime[i]=false;\n\tfor(int i=3; i*i<=N; i+=2) if(_isPrime[i]) \n\t\t\
    for(int j=i; i*j<=N; j+=2) _isPrime[i*j]=false;\n\treturn _isPrime;\n}\n/*}}}*/\n"
  dependsOn: []
  isVerificationFile: false
  path: qitoy/prime/sieve.hpp
  requiredBy: []
  timestamp: '2023-01-01 21:12:37+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/prime/sieve.test.cpp
documentation_of: qitoy/prime/sieve.hpp
layout: document
redirect_from:
- /library/qitoy/prime/sieve.hpp
- /library/qitoy/prime/sieve.hpp.html
title: qitoy/prime/sieve.hpp
---
