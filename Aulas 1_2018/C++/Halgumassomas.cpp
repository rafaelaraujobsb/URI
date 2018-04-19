#include <bits/stdc++.h>

using namespace std;

int main(){
	long r=0, n;
	int a,b,c=0;
	string value;

	scanf("%ld %d %d", &n, &a, &b);

	for(int i=a; i<=n; i++){
		if(i>9){
			value = to_string(i);

			for(int j=0; j<value.length(); j++) c += value[j] - '0';

		} else c = i;

		if(c >= a && c <= b) r+=i;

		c = 0;
	}

	printf("%ld\n", r);

	return 0;
}
