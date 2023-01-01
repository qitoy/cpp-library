---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/math/binomial.test.cpp
    title: test/math/binomial.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 1 \"qitoy/math/binomial.hpp\"\ntemplate<int mod=1000000007>\n\
    struct binomial {\n\tpublic:\n\t\texplicit binomial(int n)\n\t\t\t: _n(n), _fac(n+1),\
    \ _inv(n+1), _finv(n+1) {\n\t\t\t_fac[0]=_fac[1]=_finv[0]=_finv[1]=_inv[1]=1;\n\
    \t\t\tfor (int i = 2; i <= _n; i++) {\n\t\t\t\t_fac[i]=(long long)_fac[i-1]*i%mod;\n\
    \t\t\t\t_inv[i]=mod-(long long)_inv[mod%i]*(mod/i)%mod;\n\t\t\t\t_finv[i]=(long\
    \ long)_finv[i-1]*_inv[i]%mod;\n\t\t\t}\n\t\t}\n\n\t\tint calc(int n, int k) {\n\
    \t\t\tif(n<k or n<0 or k<0) return 0;\n\t\t\tassert(n<=_n);\n\t\t\treturn (long\
    \ long)_fac[n]*((long long)_finv[k]*_finv[n-k]%mod)%mod;\n\t\t}\n\n\tprivate:\n\
    \t\tint _n;\n\t\tstd::vector<int> _fac, _inv, _finv;\n};\n"
  code: "template<int mod=1000000007>\nstruct binomial {\n\tpublic:\n\t\texplicit\
    \ binomial(int n)\n\t\t\t: _n(n), _fac(n+1), _inv(n+1), _finv(n+1) {\n\t\t\t_fac[0]=_fac[1]=_finv[0]=_finv[1]=_inv[1]=1;\n\
    \t\t\tfor (int i = 2; i <= _n; i++) {\n\t\t\t\t_fac[i]=(long long)_fac[i-1]*i%mod;\n\
    \t\t\t\t_inv[i]=mod-(long long)_inv[mod%i]*(mod/i)%mod;\n\t\t\t\t_finv[i]=(long\
    \ long)_finv[i-1]*_inv[i]%mod;\n\t\t\t}\n\t\t}\n\n\t\tint calc(int n, int k) {\n\
    \t\t\tif(n<k or n<0 or k<0) return 0;\n\t\t\tassert(n<=_n);\n\t\t\treturn (long\
    \ long)_fac[n]*((long long)_finv[k]*_finv[n-k]%mod)%mod;\n\t\t}\n\n\tprivate:\n\
    \t\tint _n;\n\t\tstd::vector<int> _fac, _inv, _finv;\n};\n"
  dependsOn: []
  isVerificationFile: false
  path: qitoy/math/binomial.hpp
  requiredBy: []
  timestamp: '2023-01-01 21:12:37+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/math/binomial.test.cpp
documentation_of: qitoy/math/binomial.hpp
layout: document
redirect_from:
- /library/qitoy/math/binomial.hpp
- /library/qitoy/math/binomial.hpp.html
title: qitoy/math/binomial.hpp
---
