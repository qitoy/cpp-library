---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: prime/test.hpp
    title: prime/test.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/prime/factorize.test.cpp
    title: test/prime/factorize.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 1 \"prime/test.hpp\"\n/*{{{ prime_test */\nconstexpr bool prime_test(const\
    \ long long N) { // Miller-Rabin test\n\tif(N<=2) return N==2;\n\tif(N%2==0) return\
    \ false;\n\tlong long d=N-1;\n\tint r=0;\n\twhile(d%2==0) {d>>=1; r++;}\n\tfor(long\
    \ long a : {2, 325, 9375, 28178, 450775, 9780504, 1795265022}) {\n\t\tif(a%N==0)\
    \ return true;\n\t\tlong long x=1;\n\t\tfor(long long t=d; t; t>>=1) { // x=a^d\
    \ mod N\n\t\t\tif(t%2==1) x=(__int128)x*a%N;\n\t\t\ta=(__int128)a*a%N;\n\t\t}\n\
    \t\tif(x==1 or x==N-1) continue;\n\t\tfor(int i=0; i<r; i++) {\n\t\t\tx=(__int128)x*x%N;\n\
    \t\t\tif(x==N-1) break;\n\t\t\tif(x==1 or i==r-1) return false;\n\t\t}\n\t}\n\t\
    return true;\n}\n/*}}}*/\n#line 2 \"prime/factorize.hpp\"\n\n/*{{{ factorize */\n\
    long long findfactor(long long N) {\n\tif(N%2==0) return 2;\n\t// Pollard's rho\
    \ algorithm, improved by Brent\n\tlong long G=1;\n\tstd::mt19937_64 rnd;\n\tdo\
    \ {\n\t\tlong long x,y=rnd()%(N-1)+1,q=1,ys,c=rnd()%(N-1)+1; int r=1,k;\n\t\t\
    auto f=[&](long long X){return ((__int128)X*X+c)%N;};\n\t\tconstexpr int m=128;\n\
    \t\tdo {\n\t\t\tx=y;\n\t\t\tfor(int i=0; i<r; i++) y=f(y);\n\t\t\tk=0;\n\t\t\t\
    do {\n\t\t\t\tys=y;\n\t\t\t\tfor(int i=0; i<std::min(m,r-k); i++) {\n\t\t\t\t\t\
    y=f(y); q=(__int128)q*std::abs(x-y)%N;\n\t\t\t\t}\n\t\t\t\tG=std::gcd(q,N); k+=m;\n\
    \t\t\t} while(k<r and G==1); r<<=1;\n\t\t} while (G==1);\n\t\t\tif(G==N) do {\n\
    \t\t\t\tys=f(ys); G=std::gcd(std::abs(x-ys),N);\n\t\t\t} while(G==1);\n\t} while(G==N);\n\
    \treturn G;\n}\n\nstd::vector<long long> factorize(long long N) {\n\tif(N==1)\
    \ return {};\n\tstd::vector<long long> vec={N};\n\tfor(std::size_t i=0; i<vec.size();)\
    \ {\n\t\tif(prime_test(vec[i])) {i++; continue;}\n\t\tlong long d=findfactor(vec[i]);\n\
    \t\tvec[i]/=d; vec.push_back(d);\n\t}\n\tstd::sort(vec.begin(), vec.end());\n\t\
    return vec;\n}\n/*}}}*/\n"
  code: "#include \"test.hpp\"\n\n/*{{{ factorize */\nlong long findfactor(long long\
    \ N) {\n\tif(N%2==0) return 2;\n\t// Pollard's rho algorithm, improved by Brent\n\
    \tlong long G=1;\n\tstd::mt19937_64 rnd;\n\tdo {\n\t\tlong long x,y=rnd()%(N-1)+1,q=1,ys,c=rnd()%(N-1)+1;\
    \ int r=1,k;\n\t\tauto f=[&](long long X){return ((__int128)X*X+c)%N;};\n\t\t\
    constexpr int m=128;\n\t\tdo {\n\t\t\tx=y;\n\t\t\tfor(int i=0; i<r; i++) y=f(y);\n\
    \t\t\tk=0;\n\t\t\tdo {\n\t\t\t\tys=y;\n\t\t\t\tfor(int i=0; i<std::min(m,r-k);\
    \ i++) {\n\t\t\t\t\ty=f(y); q=(__int128)q*std::abs(x-y)%N;\n\t\t\t\t}\n\t\t\t\t\
    G=std::gcd(q,N); k+=m;\n\t\t\t} while(k<r and G==1); r<<=1;\n\t\t} while (G==1);\n\
    \t\t\tif(G==N) do {\n\t\t\t\tys=f(ys); G=std::gcd(std::abs(x-ys),N);\n\t\t\t}\
    \ while(G==1);\n\t} while(G==N);\n\treturn G;\n}\n\nstd::vector<long long> factorize(long\
    \ long N) {\n\tif(N==1) return {};\n\tstd::vector<long long> vec={N};\n\tfor(std::size_t\
    \ i=0; i<vec.size();) {\n\t\tif(prime_test(vec[i])) {i++; continue;}\n\t\tlong\
    \ long d=findfactor(vec[i]);\n\t\tvec[i]/=d; vec.push_back(d);\n\t}\n\tstd::sort(vec.begin(),\
    \ vec.end());\n\treturn vec;\n}\n/*}}}*/\n"
  dependsOn:
  - prime/test.hpp
  isVerificationFile: false
  path: prime/factorize.hpp
  requiredBy: []
  timestamp: '2022-02-21 03:24:01+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/prime/factorize.test.cpp
documentation_of: prime/factorize.hpp
layout: document
redirect_from:
- /library/prime/factorize.hpp
- /library/prime/factorize.hpp.html
title: prime/factorize.hpp
---
