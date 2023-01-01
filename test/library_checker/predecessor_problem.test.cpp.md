---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: qitoy/data_structure/fenwicktree.hpp
    title: qitoy/data_structure/fenwicktree.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: https://judge.yosupo.jp/problem/predecessor_problem
    links:
    - https://judge.yosupo.jp/problem/predecessor_problem
  bundledCode: "#line 1 \"test/library_checker/predecessor_problem.test.cpp\"\n#define\
    \ PROBLEM \"https://judge.yosupo.jp/problem/predecessor_problem\"\n#include <bits/stdc++.h>\n\
    #line 1 \"qitoy/data_structure/fenwicktree.hpp\"\n// fenwicktree(ACL) modified\n\
    template <class T> struct fenwick_tree {\n  public:\n    fenwick_tree() : _n(0)\
    \ {}\n    explicit fenwick_tree(int n) : _n(n), data(n) {}\n\n    void add(int\
    \ p, T x) {\n        assert(0 <= p && p < _n);\n        p++;\n        while (p\
    \ <= _n) {\n            data[p - 1] += x;\n            p += p & -p;\n        }\n\
    \    }\n\n\tvoid modify(int p, T x) {\n\t\tadd(p, x-get(p));\n\t}\n\n\tT get(int\
    \ i) {\n\t\treturn sum(i, i+1);\n\t}\n\n    T sum(int r) {\n        T s = 0;\n\
    \        while (r > 0) {\n            s += data[r - 1];\n            r -= r &\
    \ -r;\n        }\n        return s;\n    }\n\n    T sum(int l, int r) {\n    \
    \    assert(0 <= l && l <= r && r <= _n);\n        return sum(r) - sum(l);\n \
    \   }\n\n\tint lower_bound(T x) {\n\t\tif(x <= 0) return -1;\n\t\tint l=0;\n\t\
    \tfor(int k=1<<(31-__builtin_clz(_n)); k>0; k>>=1) {\n\t\t\tif(l+k <= _n and data[l+k-1]\
    \ < x) {\n\t\t\t\tx-=data[l+k-1];\n\t\t\t\tl+=k;\n\t\t\t}\n\t\t}\n\t\treturn l;\n\
    \t}\n\n  private:\n    int _n;\n    std::vector<T> data;\n};\n#line 4 \"test/library_checker/predecessor_problem.test.cpp\"\
    \nusing namespace std;\n\nint main(){\n\n\tcin.tie(nullptr);\n\tios_base::sync_with_stdio(false);\n\
    \n\tint N,Q; cin >> N >> Q;\n\tstring T; cin >> T;\n\tfenwick_tree<int> F(N);\n\
    \tfor (int i = 0; i < N; i++) \n\t\tF.add(i, T[i]-'0');\n\twhile(Q--) {\n\t\t\
    int c,k; cin >> c >> k;\n\t\tif(c==0) F.modify(k, 1);\n\t\tif(c==1) F.modify(k,\
    \ 0);\n\t\tif(c==2) cout << F.get(k);\n\t\tif(c==3) {\n\t\t\tint l=F.lower_bound(F.sum(k)+1);\n\
    \t\t\tcout << (l==N?-1:l);\n\t\t}\n\t\tif(c==4) cout << F.lower_bound(F.sum(k+1));\n\
    \t\tcout << '\\n';\n\t}\n\n}\n"
  code: "#define PROBLEM \"https://judge.yosupo.jp/problem/predecessor_problem\"\n\
    #include <bits/stdc++.h>\n#include \"qitoy/data_structure/fenwicktree.hpp\"\n\
    using namespace std;\n\nint main(){\n\n\tcin.tie(nullptr);\n\tios_base::sync_with_stdio(false);\n\
    \n\tint N,Q; cin >> N >> Q;\n\tstring T; cin >> T;\n\tfenwick_tree<int> F(N);\n\
    \tfor (int i = 0; i < N; i++) \n\t\tF.add(i, T[i]-'0');\n\twhile(Q--) {\n\t\t\
    int c,k; cin >> c >> k;\n\t\tif(c==0) F.modify(k, 1);\n\t\tif(c==1) F.modify(k,\
    \ 0);\n\t\tif(c==2) cout << F.get(k);\n\t\tif(c==3) {\n\t\t\tint l=F.lower_bound(F.sum(k)+1);\n\
    \t\t\tcout << (l==N?-1:l);\n\t\t}\n\t\tif(c==4) cout << F.lower_bound(F.sum(k+1));\n\
    \t\tcout << '\\n';\n\t}\n\n}\n"
  dependsOn:
  - qitoy/data_structure/fenwicktree.hpp
  isVerificationFile: true
  path: test/library_checker/predecessor_problem.test.cpp
  requiredBy: []
  timestamp: '2023-01-01 21:12:37+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: test/library_checker/predecessor_problem.test.cpp
layout: document
redirect_from:
- /verify/test/library_checker/predecessor_problem.test.cpp
- /verify/test/library_checker/predecessor_problem.test.cpp.html
title: test/library_checker/predecessor_problem.test.cpp
---
