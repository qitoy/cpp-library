---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/library_checker/point_add_range_sum.test.cpp
    title: test/library_checker/point_add_range_sum.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/library_checker/predecessor_problem.test.cpp
    title: test/library_checker/predecessor_problem.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 1 \"data_structure/fenwicktree.hpp\"\n// fenwicktree(ACL) modified\n\
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
    \t}\n\n  private:\n    int _n;\n    std::vector<T> data;\n};\n"
  code: "// fenwicktree(ACL) modified\ntemplate <class T> struct fenwick_tree {\n\
    \  public:\n    fenwick_tree() : _n(0) {}\n    explicit fenwick_tree(int n) :\
    \ _n(n), data(n) {}\n\n    void add(int p, T x) {\n        assert(0 <= p && p\
    \ < _n);\n        p++;\n        while (p <= _n) {\n            data[p - 1] +=\
    \ x;\n            p += p & -p;\n        }\n    }\n\n\tvoid modify(int p, T x)\
    \ {\n\t\tadd(p, x-get(p));\n\t}\n\n\tT get(int i) {\n\t\treturn sum(i, i+1);\n\
    \t}\n\n    T sum(int r) {\n        T s = 0;\n        while (r > 0) {\n       \
    \     s += data[r - 1];\n            r -= r & -r;\n        }\n        return s;\n\
    \    }\n\n    T sum(int l, int r) {\n        assert(0 <= l && l <= r && r <= _n);\n\
    \        return sum(r) - sum(l);\n    }\n\n\tint lower_bound(T x) {\n\t\tif(x\
    \ <= 0) return -1;\n\t\tint l=0;\n\t\tfor(int k=1<<(31-__builtin_clz(_n)); k>0;\
    \ k>>=1) {\n\t\t\tif(l+k <= _n and data[l+k-1] < x) {\n\t\t\t\tx-=data[l+k-1];\n\
    \t\t\t\tl+=k;\n\t\t\t}\n\t\t}\n\t\treturn l;\n\t}\n\n  private:\n    int _n;\n\
    \    std::vector<T> data;\n};\n"
  dependsOn: []
  isVerificationFile: false
  path: data_structure/fenwicktree.hpp
  requiredBy: []
  timestamp: '2022-02-15 20:49:54+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/library_checker/predecessor_problem.test.cpp
  - test/library_checker/point_add_range_sum.test.cpp
documentation_of: data_structure/fenwicktree.hpp
layout: document
title: Fenwick Tree
---

# 注釈

これはACLのを改造したやつ

# 機能

型`T`を`unsigned`に変換する機能を削除  
`lower_bound`を使用する際は各値が非負でなくてはならない

## `add(p,x)`

そのまんま

## `modify(p,x)`

位置`p`に`x`を代入する

## `get(i)`

位置`i`の値を取得

## `sum(r)`

`[0,r)`の総和

## `sum(l,r)`

`[l,r)`の総和

## `lower_bound(x)`

`x`以上の位置を探す
