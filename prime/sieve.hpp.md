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
  bundledCode: "#line 1 \"prime/sieve.hpp\"\n/*{{{ prime_sieve */\nstd::vector<bool>\
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
  path: prime/sieve.hpp
  requiredBy: []
  timestamp: '2022-02-21 03:24:01+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/prime/sieve.test.cpp
documentation_of: prime/sieve.hpp
layout: document
redirect_from:
- /library/prime/sieve.hpp
- /library/prime/sieve.hpp.html
title: prime/sieve.hpp
---
