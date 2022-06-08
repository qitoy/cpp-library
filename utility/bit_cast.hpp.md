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
  bundledCode: "#line 1 \"utility/bit_cast.hpp\"\n#include <cstring>\n\ntemplate<typename\
    \ To, typename From>\nTo bit_cast(const From& from) noexcept {\n\tTo to;\n\tstd::memcpy(&to,\
    \ &from, sizeof(To));\n\treturn to;\n}\n"
  code: "#include <cstring>\n\ntemplate<typename To, typename From>\nTo bit_cast(const\
    \ From& from) noexcept {\n\tTo to;\n\tstd::memcpy(&to, &from, sizeof(To));\n\t\
    return to;\n}\n"
  dependsOn: []
  isVerificationFile: false
  path: utility/bit_cast.hpp
  requiredBy: []
  timestamp: '2022-04-17 17:57:40+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: utility/bit_cast.hpp
layout: document
redirect_from:
- /library/utility/bit_cast.hpp
- /library/utility/bit_cast.hpp.html
title: utility/bit_cast.hpp
---
