#include <bits/stdc++.h>
#ifdef ONLINE_JUDGE
#define LL "%I64d"
#else
#define LL "%lld"
#endif

using namespace std;

int main(){
	vector<long long> v;
	long long n, x;

	scanf(LL, &n);

	for(long long i=0; i<n; i++){
		scanf(LL, &x);
		v.push_back(x);
	}

	sort(v.begin(), v.end());

	for(long long i=0; i<n; i++){
		printf(LL, v[i]);
		printf(" ");
	}

	printf("\n");

	return 0;
}
