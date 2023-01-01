---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':warning:'
  attributes:
    links: []
  bundledCode: "#line 1 \"qitoy/data_structure/radix_heap.hpp\"\n#include <algorithm>\n\
    #include <numeric>\n#include <utility>\n#include <vector>\n\ntemplate<class T>\n\
    struct radix_heap {\n\tpublic:\n\t\tusing key_type = unsigned long long;\n\t\t\
    using value_type = T;\n\n\t\tradix_heap() : sz(), last(), heap{} {\n\t\t\tstd::fill(heap_min,\
    \ heap_min+65, std::numeric_limits<key_type>::max());\n\t\t}\n\n\t\tstd::size_t\
    \ size() const { return sz; }\n\t\tbool empty() const { return sz==0; }\n\n\t\t\
    void push(const key_type k, const value_type& v) {\n\t\t\tassert(last<=k);\n\t\
    \t\tint i=bsr(k^last)+1;\n\t\t\theap[i].emplace_back(k,v);\n\t\t\theap_min[i]=std::min(heap_min[i],k);\n\
    \t\t\tsz++;\n\t\t}\n\n\t\tvoid push(const key_type k, value_type&& v) {\n\t\t\t\
    assert(last<=k);\n\t\t\tint i=bsr(k^last)+1;\n\t\t\theap[i].emplace_back(k, std::move(v));\n\
    \t\t\theap_min[i]=std::min(heap_min[i],k);\n\t\t\tsz++;\n\t\t}\n\n\t\tconst std::pair<key_type,\
    \ value_type>& top() {\n\t\t\tpull();\n\t\t\treturn heap[0].back();\n\t\t}\n\n\
    \t\tvoid pop() {\n\t\t\tpull();\n\t\t\theap[0].pop_back();\n\t\t\tsz--;\n\t\t\
    }\n\n\tprivate:\n\t\tstd::size_t sz;\n\t\tkey_type last;\n\t\tstd::vector<std::pair<key_type,\
    \ value_type>> heap[65];\n\t\tkey_type heap_min[65];\n\n\t\tint bsr(const key_type\
    \ k) {\n\t\t\treturn k==0 ? -1 : 63-__builtin_clzll(k);\n\t\t}\n\n\t\tvoid pull()\
    \ {\n\t\t\tassert(!empty());\n\t\t\tif(!heap[0].empty()) return;\n\t\t\tint i=1;\n\
    \t\t\twhile(heap[i].empty()) i++;\n\t\t\tlast=heap_min[i];\n\t\t\theap_min[0]=last;\n\
    \t\t\tfor(auto [k,v]:heap[i]) push(k,v);\n\t\t\tsz-=heap[i].size();\n\t\t\theap[i].clear();\n\
    \t\t\theap_min[i]=std::numeric_limits<key_type>::max();\n\t\t}\n};\n"
  code: "#include <algorithm>\n#include <numeric>\n#include <utility>\n#include <vector>\n\
    \ntemplate<class T>\nstruct radix_heap {\n\tpublic:\n\t\tusing key_type = unsigned\
    \ long long;\n\t\tusing value_type = T;\n\n\t\tradix_heap() : sz(), last(), heap{}\
    \ {\n\t\t\tstd::fill(heap_min, heap_min+65, std::numeric_limits<key_type>::max());\n\
    \t\t}\n\n\t\tstd::size_t size() const { return sz; }\n\t\tbool empty() const {\
    \ return sz==0; }\n\n\t\tvoid push(const key_type k, const value_type& v) {\n\t\
    \t\tassert(last<=k);\n\t\t\tint i=bsr(k^last)+1;\n\t\t\theap[i].emplace_back(k,v);\n\
    \t\t\theap_min[i]=std::min(heap_min[i],k);\n\t\t\tsz++;\n\t\t}\n\n\t\tvoid push(const\
    \ key_type k, value_type&& v) {\n\t\t\tassert(last<=k);\n\t\t\tint i=bsr(k^last)+1;\n\
    \t\t\theap[i].emplace_back(k, std::move(v));\n\t\t\theap_min[i]=std::min(heap_min[i],k);\n\
    \t\t\tsz++;\n\t\t}\n\n\t\tconst std::pair<key_type, value_type>& top() {\n\t\t\
    \tpull();\n\t\t\treturn heap[0].back();\n\t\t}\n\n\t\tvoid pop() {\n\t\t\tpull();\n\
    \t\t\theap[0].pop_back();\n\t\t\tsz--;\n\t\t}\n\n\tprivate:\n\t\tstd::size_t sz;\n\
    \t\tkey_type last;\n\t\tstd::vector<std::pair<key_type, value_type>> heap[65];\n\
    \t\tkey_type heap_min[65];\n\n\t\tint bsr(const key_type k) {\n\t\t\treturn k==0\
    \ ? -1 : 63-__builtin_clzll(k);\n\t\t}\n\n\t\tvoid pull() {\n\t\t\tassert(!empty());\n\
    \t\t\tif(!heap[0].empty()) return;\n\t\t\tint i=1;\n\t\t\twhile(heap[i].empty())\
    \ i++;\n\t\t\tlast=heap_min[i];\n\t\t\theap_min[0]=last;\n\t\t\tfor(auto [k,v]:heap[i])\
    \ push(k,v);\n\t\t\tsz-=heap[i].size();\n\t\t\theap[i].clear();\n\t\t\theap_min[i]=std::numeric_limits<key_type>::max();\n\
    \t\t}\n};\n"
  dependsOn: []
  isVerificationFile: false
  path: qitoy/data_structure/radix_heap.hpp
  requiredBy: []
  timestamp: '2023-01-01 21:12:37+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: qitoy/data_structure/radix_heap.hpp
layout: document
redirect_from:
- /library/qitoy/data_structure/radix_heap.hpp
- /library/qitoy/data_structure/radix_heap.hpp.html
title: qitoy/data_structure/radix_heap.hpp
---
