#include <bits/stdc++.h>

using namespace std;

int main(){
	long n,a,r;

	scanf("%ld %ld", &n, &a);

	if(n <= a){
		printf("Sim\n");
	} else {
		r = n%500;
		a -= r;

		if(r == 0 || a >= 0){
			printf("Sim\n");
		} else {
			printf("Nao\n");
		}
	}


	return 0;
}
