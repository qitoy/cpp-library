---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: qitoy/prime/sieve.hpp
    title: qitoy/prime/sieve.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: https://judge.yosupo.jp/problem/enumerate_primes
    links:
    - https://judge.yosupo.jp/problem/enumerate_primes
  bundledCode: "#line 1 \"test/prime/sieve.test.cpp\"\n#define PROBLEM \"https://judge.yosupo.jp/problem/enumerate_primes\"\
    \n#include <bits/stdc++.h>\n#line 1 \"qitoy/prime/sieve.hpp\"\n/*{{{ prime_sieve\
    \ */\nstd::vector<bool> prime_sieve(int N) {\n\tstd::vector<bool> _isPrime(N+1,\
    \ true);\n\t_isPrime[0]=_isPrime[1]=false;\n\tfor(int i=4; i<=N; i+=2) _isPrime[i]=false;\n\
    \tfor(int i=3; i*i<=N; i+=2) if(_isPrime[i]) \n\t\tfor(int j=i; i*j<=N; j+=2)\
    \ _isPrime[i*j]=false;\n\treturn _isPrime;\n}\n/*}}}*/\n#line 4 \"test/prime/sieve.test.cpp\"\
    \nusing namespace std;\n\nint main(){\n\n\tcin.tie(nullptr);\n\tios_base::sync_with_stdio(false);\n\
    \n\tint N,A,B; cin >> N >> A >> B;\n\tauto isP=prime_sieve(N);\n\tvector<int>\
    \ primes;\n\tint pi=0, X=0;\n\tfor (int i = 1; i <= N; i++) if(isP[i]) if(pi++%A==B)\
    \ {\n\t\tX++; primes.push_back(i);\n\t}\n\tcout << pi << ' ' << X << '\\n';\n\t\
    for (auto&& p : primes) cout << p << ' ';\n\tcout << '\\n';\n\n}\n"
  code: "#define PROBLEM \"https://judge.yosupo.jp/problem/enumerate_primes\"\n#include\
    \ <bits/stdc++.h>\n#include \"qitoy/prime/sieve.hpp\"\nusing namespace std;\n\n\
    int main(){\n\n\tcin.tie(nullptr);\n\tios_base::sync_with_stdio(false);\n\n\t\
    int N,A,B; cin >> N >> A >> B;\n\tauto isP=prime_sieve(N);\n\tvector<int> primes;\n\
    \tint pi=0, X=0;\n\tfor (int i = 1; i <= N; i++) if(isP[i]) if(pi++%A==B) {\n\t\
    \tX++; primes.push_back(i);\n\t}\n\tcout << pi << ' ' << X << '\\n';\n\tfor (auto&&\
    \ p : primes) cout << p << ' ';\n\tcout << '\\n';\n\n}\n"
  dependsOn:
  - qitoy/prime/sieve.hpp
  isVerificationFile: true
  path: test/prime/sieve.test.cpp
  requiredBy: []
  timestamp: '2023-01-01 21:12:37+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: test/prime/sieve.test.cpp
layout: document
redirect_from:
- /verify/test/prime/sieve.test.cpp
- /verify/test/prime/sieve.test.cpp.html
title: test/prime/sieve.test.cpp
---
