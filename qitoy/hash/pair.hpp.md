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
  bundledCode: "#line 1 \"qitoy/hash/pair.hpp\"\n#include <utility>\n#include <functional>\n\
    #include <random>\n\nnamespace std {\n\ttemplate<class T, class U>\n\t\tstruct\
    \ hash<pair<T,U>> {\n\t\t\tpublic:\n\t\t\t\tsize_t operator()(const pair<T,U>&\
    \ p) const {\n\t\t\t\t\tsize_t ret=0;\n\t\t\t\t\tret^=hash<T>{}(p.first)+0x9e3779b9+(ret<<6)+(ret>>2);\n\
    \t\t\t\t\tret^=hash<U>{}(p.second)+0x9e3779b9+(ret<<6)+(ret>>2);\n\t\t\t\t\tret^=seed+0x9e3779b9+(ret<<6)+(ret>>2);\n\
    \t\t\t\t\treturn ret;\n\t\t\t\t}\n\t\t\tprivate:\n\t\t\t\tinline static const\
    \ size_t seed=random_device()();\n\t\t};\n}\n"
  code: "#include <utility>\n#include <functional>\n#include <random>\n\nnamespace\
    \ std {\n\ttemplate<class T, class U>\n\t\tstruct hash<pair<T,U>> {\n\t\t\tpublic:\n\
    \t\t\t\tsize_t operator()(const pair<T,U>& p) const {\n\t\t\t\t\tsize_t ret=0;\n\
    \t\t\t\t\tret^=hash<T>{}(p.first)+0x9e3779b9+(ret<<6)+(ret>>2);\n\t\t\t\t\tret^=hash<U>{}(p.second)+0x9e3779b9+(ret<<6)+(ret>>2);\n\
    \t\t\t\t\tret^=seed+0x9e3779b9+(ret<<6)+(ret>>2);\n\t\t\t\t\treturn ret;\n\t\t\
    \t\t}\n\t\t\tprivate:\n\t\t\t\tinline static const size_t seed=random_device()();\n\
    \t\t};\n}\n"
  dependsOn: []
  isVerificationFile: false
  path: qitoy/hash/pair.hpp
  requiredBy: []
  timestamp: '2023-01-01 21:12:37+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: qitoy/hash/pair.hpp
layout: document
redirect_from:
- /library/qitoy/hash/pair.hpp
- /library/qitoy/hash/pair.hpp.html
title: qitoy/hash/pair.hpp
---
