template<class T> std::vector<T> coordinate_compression(std::vector<T>& vec) {
	std::vector<T> ret(vec);
	std::sort(ret.begin(), ret.end());
	ret.erase(std::unique(ret.begin(), ret.end()),ret.end());
	for (int i = 0; i < (int)vec.size(); i++) 
		vec[i]=std::lower_bound(ret.begin(), ret.end(), vec[i])-ret.begin();
	return ret;
}
