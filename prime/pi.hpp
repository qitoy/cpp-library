#include"../data_structure/fenwicktree.hpp"

long long prime_pi(long long N) { // ref : Meissel–Lehmer algorithm
	int a=std::cbrt(N), b=std::sqrt(N), c=N/a;
	std::vector<int> f(a+1, 1<<30), mu(a+1,1), P;
	for(int i=2; i<=a; i++) if(f[i]==1<<30) { // initial preprocessing 
		f[i]=i;
		P.push_back(i);
		for(int j=1; i*j<=a; j++) {
			f[i*j]=std::min(f[i*j],i);
			mu[i*j]*=j%i==0?0:-1;
		}
	}
	int pia=P.size();
	long long ret=pia-1;
	for(int i=1; i<=a; i++) ret+=mu[i]*(N/i); // ordinary leaves
	std::vector<bool> S(c+1,true);
	S[0]=S[1]=false;
	fenwick_tree<int> phi(c+1);
	for(int i=0; i<pia; i++) { // special leaves
		for(int j=P[i]+1; j<=a; j++) {
			if(f[j]>P[i] && j*P[i]>a)
				ret+=-mu[j]*(N/(j*P[i])-phi.sum(0,N/(j*P[i])+1));
		}
		phi.add(P[i],1);
		S[P[i]]=false;
		for(int j=P[i]; P[i]*j<=c; j++) {
			if(S[P[i]*j]) phi.add(P[i]*j,1);
			S[P[i]*j]=false;
		}
	}
	for(int i=a+1; i<=b; i++) if(S[i]) P.push_back(i);
	long long pib=P.size(), pix=P.size();
	for(int i=pib, j=b+1; i-->pia;) { // P_2
		for(; j<=N/P[i]; j++) if(S[j]) pix++;
		ret-=pix;
	}
	ret+=-pia*(pia-1)/2+pib*(pib-1)/2;
	return ret;
}
