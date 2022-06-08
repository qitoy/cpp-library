---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: math/binomial.hpp
    title: math/binomial.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: https://atcoder.jp/contests/abc145/tasks/abc145_d
    links:
    - https://atcoder.jp/contests/abc145/tasks/abc145_d
  bundledCode: "#line 1 \"test/math/binomial.test.cpp\"\n#define PROBLEM \"https://atcoder.jp/contests/abc145/tasks/abc145_d\"\
    \n#include <bits/stdc++.h>\n#line 1 \"math/binomial.hpp\"\ntemplate<int mod=1000000007>\n\
    struct binomial {\n\tpublic:\n\t\texplicit binomial(int n)\n\t\t\t: _n(n), _fac(n+1),\
    \ _inv(n+1), _finv(n+1) {\n\t\t\t_fac[0]=_fac[1]=_finv[0]=_finv[1]=_inv[1]=1;\n\
    \t\t\tfor (int i = 2; i <= _n; i++) {\n\t\t\t\t_fac[i]=(long long)_fac[i-1]*i%mod;\n\
    \t\t\t\t_inv[i]=mod-(long long)_inv[mod%i]*(mod/i)%mod;\n\t\t\t\t_finv[i]=(long\
    \ long)_finv[i-1]*_inv[i]%mod;\n\t\t\t}\n\t\t}\n\n\t\tint calc(int n, int k) {\n\
    \t\t\tif(n<k or n<0 or k<0) return 0;\n\t\t\tassert(n<=_n);\n\t\t\treturn (long\
    \ long)_fac[n]*((long long)_finv[k]*_finv[n-k]%mod)%mod;\n\t\t}\n\n\tprivate:\n\
    \t\tint _n;\n\t\tstd::vector<int> _fac, _inv, _finv;\n};\n#line 4 \"test/math/binomial.test.cpp\"\
    \nusing namespace std;\n\nint main(){\n\n\tcin.tie(nullptr);\n\tios_base::sync_with_stdio(false);\n\
    \n\tint X,Y; cin >> X >> Y;\n\tif(2*X<Y or X>2*Y or (X+Y)%3!=0) {\n\t\tcout <<\
    \ 0 << '\\n'; return 0;\n\t}\n\tbinomial B(700000);\n\tcout << B.calc((X+Y)/3,\
    \ (2*X-Y)/3) << '\\n';\n\n}\n"
  code: "#define PROBLEM \"https://atcoder.jp/contests/abc145/tasks/abc145_d\"\n#include\
    \ <bits/stdc++.h>\n#include \"math/binomial.hpp\"\nusing namespace std;\n\nint\
    \ main(){\n\n\tcin.tie(nullptr);\n\tios_base::sync_with_stdio(false);\n\n\tint\
    \ X,Y; cin >> X >> Y;\n\tif(2*X<Y or X>2*Y or (X+Y)%3!=0) {\n\t\tcout << 0 <<\
    \ '\\n'; return 0;\n\t}\n\tbinomial B(700000);\n\tcout << B.calc((X+Y)/3, (2*X-Y)/3)\
    \ << '\\n';\n\n}\n"
  dependsOn:
  - math/binomial.hpp
  isVerificationFile: true
  path: test/math/binomial.test.cpp
  requiredBy: []
  timestamp: '2022-06-08 13:10:37+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: test/math/binomial.test.cpp
layout: document
redirect_from:
- /verify/test/math/binomial.test.cpp
- /verify/test/math/binomial.test.cpp.html
title: test/math/binomial.test.cpp
---
