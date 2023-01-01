#include <utility>
#include <vector>

template<class Iter> auto RLE(Iter first, Iter last) {
    std::vector<std::pair<typename Iter::value_type,int>> r;
    int cnt=0;
    for(; first!=last; first++) {
        cnt++;
        if(first==prev(last) or *first!=*next(first)) {
            r.emplace_back(*first, cnt);
            cnt=0;
        }
    }
    return r;
}
