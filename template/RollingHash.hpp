#pragma once

#include<cassert> 
#include<random> // random_device
#include<string>
#include<utility> // pair
#include<vector>

namespace qitoy {

	using u64  = unsigned long long;
	using u128 = unsigned __int128;

	class RollingHash {
		public:
			RollingHash(std::string const& S)
				: _n(S.size()), _base1(_n+1), _base2(_n+1), _hash1(_n+1), _hash2(_n+1) {
					std::random_device rnd;
					static u64 b1=rnd()+128, b2=rnd()+128;
					_base1[0]=_base2[0]=1;
					for(int i=0; i<_n; i++) {
						_base1[i+1]=mul(_base1[i],b1);
						_base2[i+1]=mul(_base2[i],b2);
						_hash1[i+1]=mul(_hash1[i],b1)+S[i];
						_hash2[i+1]=mul(_hash2[i],b2)+S[i];
					}
				}
			std::pair<u64,u64> gethash(int l, int r) {
				assert(0<=l && l<=r && r<=_n);
				u64 ret1=_hash1[r]-mul(_hash1[l],_base1[r-l]);
				if(ret1>=mod) ret1+=mod;
				u64 ret2=_hash2[r]-mul(_hash2[l],_base2[r-l]);
				if(ret2>=mod) ret2+=mod;
				return std::make_pair(ret1,ret2);
			}
		private:
			const u64 mod=(1ull<<61)-1;
			int _n;
			std::vector<u64> _base1, _base2, _hash1, _hash2;
			u64 mul(u128 a, u128 b) const {
				u128 t=a*b; t=(t>>61)+(t&mod);
				return t>=mod?t-mod:t;
			}
	};

} // namespace qitoy
