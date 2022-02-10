---
title: Fenwick Tree
documentation_of: //tree/fenwicktree.hpp
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
