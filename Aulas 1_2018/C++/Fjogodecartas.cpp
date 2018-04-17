#include <bits/stdc++.h>
#ifdef ONLINE_JUDGE
#define LL "%I64d"
#else
#define LL "%lld"
#endif

using namespace std;

int main(){
	vector<long long> cartas;
	long long n, a=0, b=0, c, t=0;

	scanf(LL, &n);

	for(long long i=0; i<n; i++){
		scanf(LL, &c);
		cartas.push_back(c);
	}

	sort(cartas.begin(), cartas.end());

	for(long long i=n-1; i>=0; i--){
		if(t==0){
			a += cartas[i];
			t=1;
		} else {
			b += cartas[i];
			t=0;
		}
	}

	if(a > b) n = a-b;
	else n = b-a;

	printf(LL,n);
    printf("\n");
	return 0;
}
