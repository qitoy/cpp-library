---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: vector/coordinate_compression.hpp
    title: vector/coordinate_compression.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: https://judge.yosupo.jp/problem/associative_array
    links:
    - https://judge.yosupo.jp/problem/associative_array
  bundledCode: "#line 1 \"test/library_checker/associative_array.test.cpp\"\n#define\
    \ PROBLEM \"https://judge.yosupo.jp/problem/associative_array\"\n#include <bits/stdc++.h>\n\
    #line 1 \"vector/coordinate_compression.hpp\"\ntemplate<class T> std::vector<T>\
    \ coordinate_compression(std::vector<T>& vec) {\n\tstd::vector<T> ret(vec);\n\t\
    std::sort(ret.begin(), ret.end());\n\tret.erase(std::unique(ret.begin(), ret.end()),ret.end());\n\
    \tfor (int i = 0; i < (int)vec.size(); i++) \n\t\tvec[i]=std::lower_bound(ret.begin(),\
    \ ret.end(), vec[i])-ret.begin();\n\treturn ret;\n}\n#line 4 \"test/library_checker/associative_array.test.cpp\"\
    \nusing namespace std;\n\nint main(){\n\n\tcin.tie(nullptr);\n\tios_base::sync_with_stdio(false);\n\
    \n\tint Q; cin >> Q;\n\tvector<pair<int, long long>> Query(Q);\n\tvector<long\
    \ long> K(Q);\n\tfor (int i = 0; i < Q; i++) {\n\t\tauto&& [q,v]=Query[i];\n\t\
    \tcin >> q >> K[i];\n\t\tif(q==0) cin >> v;\n\t}\n\tcoordinate_compression(K);\n\
    \tvector<long long> ans(K.size());\n\tfor (int i = 0; i < Q; i++) {\n\t\tauto&&\
    \ [q,v]=Query[i];\n\t\tif(q==0) ans[K[i]]=v;\n\t\tif(q==1) cout << ans[K[i]] <<\
    \ '\\n';\n\t}\n\n}\n"
  code: "#define PROBLEM \"https://judge.yosupo.jp/problem/associative_array\"\n#include\
    \ <bits/stdc++.h>\n#include \"vector/coordinate_compression.hpp\"\nusing namespace\
    \ std;\n\nint main(){\n\n\tcin.tie(nullptr);\n\tios_base::sync_with_stdio(false);\n\
    \n\tint Q; cin >> Q;\n\tvector<pair<int, long long>> Query(Q);\n\tvector<long\
    \ long> K(Q);\n\tfor (int i = 0; i < Q; i++) {\n\t\tauto&& [q,v]=Query[i];\n\t\
    \tcin >> q >> K[i];\n\t\tif(q==0) cin >> v;\n\t}\n\tcoordinate_compression(K);\n\
    \tvector<long long> ans(K.size());\n\tfor (int i = 0; i < Q; i++) {\n\t\tauto&&\
    \ [q,v]=Query[i];\n\t\tif(q==0) ans[K[i]]=v;\n\t\tif(q==1) cout << ans[K[i]] <<\
    \ '\\n';\n\t}\n\n}\n"
  dependsOn:
  - vector/coordinate_compression.hpp
  isVerificationFile: true
  path: test/library_checker/associative_array.test.cpp
  requiredBy: []
  timestamp: '2022-06-08 13:10:37+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: test/library_checker/associative_array.test.cpp
layout: document
redirect_from:
- /verify/test/library_checker/associative_array.test.cpp
- /verify/test/library_checker/associative_array.test.cpp.html
title: test/library_checker/associative_array.test.cpp
---
