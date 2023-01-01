---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/string/RollingHash.test.cpp
    title: test/string/RollingHash.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links:
    - https://togetter.com/li/1413936
  bundledCode: "#line 2 \"qitoy/string/RollingHash.hpp\"\n\n#include <string>\n#include\
    \ <vector>\n#include <random>\n/*\n * \u53C2\u8003\uFF1A\n * \u5B89\u5168\u3067\
    \u7206\u901F\u306ARolling Hash\u306E\u8A71 https://togetter.com/li/1413936\n */\n\
    \n// {{{ RollingHash\nclass RollingHash {\n\n\tusing u64  = unsigned long long;\n\
    \tusing u128 = unsigned __int128;\n\n\tpublic:\n\tRollingHash() {}\n\tRollingHash(std::string\
    \ const& S)\n\t\t: _n(S.size()), _base1(_n+1), _base2(_n+1), _hash1(_n+1), _hash2(_n+1)\
    \ {\n\t\t\t_base1[0]=_base2[0]=1;\n\t\t\tfor(int i=0; i<_n; i++) {\n\t\t\t\t_base1[i+1]=mul(_base1[i],_b1);\n\
    \t\t\t\t_base2[i+1]=mul(_base2[i],_b2);\n\t\t\t\t_hash1[i+1]=mul(_hash1[i],_b1)+S[i];\n\
    \t\t\t\t_hash2[i+1]=mul(_hash2[i],_b2)+S[i];\n\t\t\t}\n\t\t}\n\tstd::pair<u64,u64>\
    \ gethash(int l, int r) {\n\t\tassert(0<=l && l<=r && r<=_n);\n\t\tu64 ret1=_hash1[r]-mul(_hash1[l],_base1[r-l]);\n\
    \t\tif(ret1>=mod) ret1+=mod;\n\t\tu64 ret2=_hash2[r]-mul(_hash2[l],_base2[r-l]);\n\
    \t\tif(ret2>=mod) ret2+=mod;\n\t\treturn std::make_pair(ret1,ret2);\n\t}\n\tprivate:\n\
    \tconst u64 mod=(1ull<<61)-1;\n\tint _n;\n\tinline static const u64 _b1=std::random_device()()+128,\n\
    \t\t\t\t\t\t\t_b2=std::random_device()()+128;\n\tstd::vector<u64> _base1, _base2,\
    \ _hash1, _hash2;\n\tu64 mul(u128 a, u128 b) const {\n\t\tu128 t=a*b; t=(t>>61)+(t&mod);\n\
    \t\treturn t>=mod?t-mod:t;\n\t}\n};\n// }}}\n"
  code: "#pragma once\n\n#include <string>\n#include <vector>\n#include <random>\n\
    /*\n * \u53C2\u8003\uFF1A\n * \u5B89\u5168\u3067\u7206\u901F\u306ARolling Hash\u306E\
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
    \t\treturn t>=mod?t-mod:t;\n\t}\n};\n// }}}\n"
  dependsOn: []
  isVerificationFile: false
  path: qitoy/string/RollingHash.hpp
  requiredBy: []
  timestamp: '2023-01-01 21:12:37+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/string/RollingHash.test.cpp
documentation_of: qitoy/string/RollingHash.hpp
layout: document
redirect_from:
- /library/qitoy/string/RollingHash.hpp
- /library/qitoy/string/RollingHash.hpp.html
title: qitoy/string/RollingHash.hpp
---
