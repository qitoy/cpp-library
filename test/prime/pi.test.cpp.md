---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: prime/pi.hpp
    title: prime/pi.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: https://judge.yosupo.jp/problem/counting_primes
    links:
    - https://judge.yosupo.jp/problem/counting_primes
  bundledCode: "#line 1 \"test/prime/pi.test.cpp\"\n#define PROBLEM \"https://judge.yosupo.jp/problem/counting_primes\"\
    \n#include <bits/stdc++.h>\n#line 1 \"atcoder/fenwicktree.hpp\"\n\n\n\n#line 6\
    \ \"atcoder/fenwicktree.hpp\"\n\n#line 1 \"atcoder/internal_type_traits.hpp\"\n\
    \n\n\n#line 6 \"atcoder/internal_type_traits.hpp\"\n#include <type_traits>\n\n\
    namespace atcoder {\n\nnamespace internal {\n\n#ifndef _MSC_VER\ntemplate <class\
    \ T>\nusing is_signed_int128 =\n    typename std::conditional<std::is_same<T,\
    \ __int128_t>::value ||\n                                  std::is_same<T, __int128>::value,\n\
    \                              std::true_type,\n                             \
    \ std::false_type>::type;\n\ntemplate <class T>\nusing is_unsigned_int128 =\n\
    \    typename std::conditional<std::is_same<T, __uint128_t>::value ||\n      \
    \                            std::is_same<T, unsigned __int128>::value,\n    \
    \                          std::true_type,\n                              std::false_type>::type;\n\
    \ntemplate <class T>\nusing make_unsigned_int128 =\n    typename std::conditional<std::is_same<T,\
    \ __int128_t>::value,\n                              __uint128_t,\n          \
    \                    unsigned __int128>;\n\ntemplate <class T>\nusing is_integral\
    \ = typename std::conditional<std::is_integral<T>::value ||\n                \
    \                                  is_signed_int128<T>::value ||\n           \
    \                                       is_unsigned_int128<T>::value,\n      \
    \                                        std::true_type,\n                   \
    \                           std::false_type>::type;\n\ntemplate <class T>\nusing\
    \ is_signed_int = typename std::conditional<(is_integral<T>::value &&\n      \
    \                                           std::is_signed<T>::value) ||\n   \
    \                                                 is_signed_int128<T>::value,\n\
    \                                                std::true_type,\n           \
    \                                     std::false_type>::type;\n\ntemplate <class\
    \ T>\nusing is_unsigned_int =\n    typename std::conditional<(is_integral<T>::value\
    \ &&\n                               std::is_unsigned<T>::value) ||\n        \
    \                          is_unsigned_int128<T>::value,\n                   \
    \           std::true_type,\n                              std::false_type>::type;\n\
    \ntemplate <class T>\nusing to_unsigned = typename std::conditional<\n    is_signed_int128<T>::value,\n\
    \    make_unsigned_int128<T>,\n    typename std::conditional<std::is_signed<T>::value,\n\
    \                              std::make_unsigned<T>,\n                      \
    \        std::common_type<T>>::type>::type;\n\n#else\n\ntemplate <class T> using\
    \ is_integral = typename std::is_integral<T>;\n\ntemplate <class T>\nusing is_signed_int\
    \ =\n    typename std::conditional<is_integral<T>::value && std::is_signed<T>::value,\n\
    \                              std::true_type,\n                             \
    \ std::false_type>::type;\n\ntemplate <class T>\nusing is_unsigned_int =\n   \
    \ typename std::conditional<is_integral<T>::value &&\n                       \
    \           std::is_unsigned<T>::value,\n                              std::true_type,\n\
    \                              std::false_type>::type;\n\ntemplate <class T>\n\
    using to_unsigned = typename std::conditional<is_signed_int<T>::value,\n     \
    \                                         std::make_unsigned<T>,\n           \
    \                                   std::common_type<T>>::type;\n\n#endif\n\n\
    template <class T>\nusing is_signed_int_t = std::enable_if_t<is_signed_int<T>::value>;\n\
    \ntemplate <class T>\nusing is_unsigned_int_t = std::enable_if_t<is_unsigned_int<T>::value>;\n\
    \ntemplate <class T> using to_unsigned_t = typename to_unsigned<T>::type;\n\n\
    }  // namespace internal\n\n}  // namespace atcoder\n\n\n#line 8 \"atcoder/fenwicktree.hpp\"\
    \n\nnamespace atcoder {\n\n// Reference: https://en.wikipedia.org/wiki/Fenwick_tree\n\
    template <class T> struct fenwick_tree {\n    using U = internal::to_unsigned_t<T>;\n\
    \n  public:\n    fenwick_tree() : _n(0) {}\n    explicit fenwick_tree(int n) :\
    \ _n(n), data(n) {}\n\n    void add(int p, T x) {\n        assert(0 <= p && p\
    \ < _n);\n        p++;\n        while (p <= _n) {\n            data[p - 1] +=\
    \ U(x);\n            p += p & -p;\n        }\n    }\n\n    T sum(int l, int r)\
    \ {\n        assert(0 <= l && l <= r && r <= _n);\n        return sum(r) - sum(l);\n\
    \    }\n\n  private:\n    int _n;\n    std::vector<U> data;\n\n    U sum(int r)\
    \ {\n        U s = 0;\n        while (r > 0) {\n            s += data[r - 1];\n\
    \            r -= r & -r;\n        }\n        return s;\n    }\n};\n\n}  // namespace\
    \ atcoder\n\n\n#line 2 \"prime/pi.hpp\"\n\n/*{{{ prime_pi */\nlong long prime_pi(long\
    \ long N) { // ref : Meissel\u2013Lehmer algorithm\n\tint a=std::cbrt(N), b=std::sqrt(N),\
    \ c=N/a;\n\tstd::vector<int> f(a+1, 1<<30), mu(a+1,1), P;\n\tfor(int i=2; i<=a;\
    \ i++) if(f[i]==1<<30) { // initial preprocessing \n\t\tf[i]=i;\n\t\tP.push_back(i);\n\
    \t\tfor(int j=1; i*j<=a; j++) {\n\t\t\tf[i*j]=std::min(f[i*j],i);\n\t\t\tmu[i*j]*=j%i==0?0:-1;\n\
    \t\t}\n\t}\n\tint pia=P.size();\n\tlong long ret=pia-1;\n\tfor(int i=1; i<=a;\
    \ i++) ret+=mu[i]*(N/i); // ordinary leaves\n\tstd::vector<bool> S(c+1,true);\n\
    \tS[0]=S[1]=false;\n\tatcoder::fenwick_tree<int> phi(c+1);\n\tfor(int i=0; i<pia;\
    \ i++) { // special leaves\n\t\tfor(int j=P[i]+1; j<=a; j++) {\n\t\t\tif(f[j]>P[i]\
    \ && j*P[i]>a)\n\t\t\t\tret+=-mu[j]*(N/(j*P[i])-phi.sum(0,N/(j*P[i])+1));\n\t\t\
    }\n\t\tphi.add(P[i],1);\n\t\tS[P[i]]=false;\n\t\tfor(int j=P[i]; P[i]*j<=c; j++)\
    \ {\n\t\t\tif(S[P[i]*j]) phi.add(P[i]*j,1);\n\t\t\tS[P[i]*j]=false;\n\t\t}\n\t\
    }\n\tfor(int i=a+1; i<=b; i++) if(S[i]) P.push_back(i);\n\tlong long pib=P.size(),\
    \ pix=P.size();\n\tfor(int i=pib, j=b+1; i-->pia;) { // P_2\n\t\tfor(; j<=N/P[i];\
    \ j++) if(S[j]) pix++;\n\t\tret-=pix;\n\t}\n\tret+=-pia*(pia-1)/2+pib*(pib-1)/2;\n\
    \treturn ret;\n}\n/*}}}*/\n#line 4 \"test/prime/pi.test.cpp\"\nusing namespace\
    \ std;\n\nint main(){\n\n\tcin.tie(nullptr);\n\tios_base::sync_with_stdio(false);\n\
    \n\tlong long N; cin >> N;\n\tcout << prime_pi(N) << '\\n';\n\n}\n"
  code: "#define PROBLEM \"https://judge.yosupo.jp/problem/counting_primes\"\n#include\
    \ <bits/stdc++.h>\n#include \"prime/pi.hpp\"\nusing namespace std;\n\nint main(){\n\
    \n\tcin.tie(nullptr);\n\tios_base::sync_with_stdio(false);\n\n\tlong long N; cin\
    \ >> N;\n\tcout << prime_pi(N) << '\\n';\n\n}\n"
  dependsOn:
  - prime/pi.hpp
  isVerificationFile: true
  path: test/prime/pi.test.cpp
  requiredBy: []
  timestamp: '2022-06-08 13:10:37+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: test/prime/pi.test.cpp
layout: document
redirect_from:
- /verify/test/prime/pi.test.cpp
- /verify/test/prime/pi.test.cpp.html
title: test/prime/pi.test.cpp
---
