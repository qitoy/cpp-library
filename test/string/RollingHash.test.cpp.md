---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: string/RollingHash.hpp
    title: string/RollingHash.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_14_B
    links:
    - https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_14_B
  bundledCode: "#line 1 \"test/string/RollingHash.test.cpp\"\n#define PROBLEM \"https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_14_B\"\
    \n#include <bits/stdc++.h>\n#line 2 \"string/RollingHash.hpp\"\n\n#line 6 \"string/RollingHash.hpp\"\
    \n/*\n * \u53C2\u8003\uFF1A\n * \u5B89\u5168\u3067\u7206\u901F\u306ARolling Hash\u306E\
    \u8A71 https://togetter.com/li/1413936\n */\n\n// {{{ RollingHash\nclass RollingHash\
    \ {\n\n\tusing u64  = unsigned long long;\n\tusing u128 = unsigned __int128;\n\
    \n\tpublic:\n\tRollingHash() {}\n\tRollingHash(std::string const& S)\n\t\t: _n(S.size()),\
    \ _base1(_n+1), _base2(_n+1), _hash1(_n+1), _hash2(_n+1) {\n\t\t\t_base1[0]=_base2[0]=1;\n\
    \t\t\tfor(int i=0; i<_n; i++) {\n\t\t\t\t_base1[i+1]=mul(_base1[i],_b1);\n\t\t\
    \t\t_base2[i+1]=mul(_base2[i],_b2);\n\t\t\t\t_hash1[i+1]=mul(_hash1[i],_b1)+S[i];\n\
    \t\t\t\t_hash2[i+1]=mul(_hash2[i],_b2)+S[i];\n\t\t\t}\n\t\t}\n\tstd::pair<u64,u64>\
    \ gethash(int l, int r) {\n\t\tassert(0<=l && l<=r && r<=_n);\n\t\tu64 ret1=_hash1[r]-mul(_hash1[l],_base1[r-l]);\n\
    \t\tif(ret1>=mod) ret1+=mod;\n\t\tu64 ret2=_hash2[r]-mul(_hash2[l],_base2[r-l]);\n\
    \t\tif(ret2>=mod) ret2+=mod;\n\t\treturn std::make_pair(ret1,ret2);\n\t}\n\tprivate:\n\
    \tconst u64 mod=(1ull<<61)-1;\n\tint _n;\n\tinline static const u64 _b1=std::random_device()()+128,\n\
    \t\t\t\t\t\t\t_b2=std::random_device()()+128;\n\tstd::vector<u64> _base1, _base2,\
    \ _hash1, _hash2;\n\tu64 mul(u128 a, u128 b) const {\n\t\tu128 t=a*b; t=(t>>61)+(t&mod);\n\
    \t\treturn t>=mod?t-mod:t;\n\t}\n};\n// }}}\n#line 4 \"test/string/RollingHash.test.cpp\"\
    \nusing namespace std;\n\nint main(){\n\n\tcin.tie(nullptr);\n\tios_base::sync_with_stdio(false);\n\
    \n\tstring T,P; cin >> T >> P;\n\tRollingHash Th(T), Ph(P);\n\tint N=T.length(),\
    \ M=P.length();\n\tfor (int i = 0; i+M <= N; i++) \n\t\tif(Th.gethash(i,i+M)==Ph.gethash(0,M))\n\
    \t\t\tcout << i << '\\n';\n\n\n}\n"
  code: "#define PROBLEM \"https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_14_B\"\
    \n#include <bits/stdc++.h>\n#include \"string/RollingHash.hpp\"\nusing namespace\
    \ std;\n\nint main(){\n\n\tcin.tie(nullptr);\n\tios_base::sync_with_stdio(false);\n\
    \n\tstring T,P; cin >> T >> P;\n\tRollingHash Th(T), Ph(P);\n\tint N=T.length(),\
    \ M=P.length();\n\tfor (int i = 0; i+M <= N; i++) \n\t\tif(Th.gethash(i,i+M)==Ph.gethash(0,M))\n\
    \t\t\tcout << i << '\\n';\n\n\n}\n"
  dependsOn:
  - string/RollingHash.hpp
  isVerificationFile: true
  path: test/string/RollingHash.test.cpp
  requiredBy: []
  timestamp: '2022-06-08 13:10:37+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: test/string/RollingHash.test.cpp
layout: document
redirect_from:
- /verify/test/string/RollingHash.test.cpp
- /verify/test/string/RollingHash.test.cpp.html
title: test/string/RollingHash.test.cpp
---
