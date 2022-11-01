#include <utility>

long long hilbertOrder(int k, int x, int y) {
    long long d=0;
    for(int i=k-1; i>=0; i--) {
        int rx=x>>i&1, ry=y>>i&1;
        d+=(1LL<<2*i)*(3*rx^ry);
        if(ry==0) {
            if(rx==1) {
                x=(1<<k)-1-x;
                y=(1<<k)-1-y;
            }
            std::swap(x,y);
        }
    }
    return d;
}
