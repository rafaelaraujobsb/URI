#include <stdio.h>
#include <stdlib.h>

int main(){
	int i, ind, n, x, v[100], maior;

	ind = 0;

	scanf("%d", &n);

	for(i=0; i<n; i++){
		scanf("%d", &x);
		if(i==0){
			v[i] = 0;
			maior=x;
			continue;
		} else {
			v[i]=0;
			if(x > maior){
				maior = x;
				ind = i;
			}
		}

		v[ind] += 1;
	}

	for(i=0; i<n; i++){
		printf("%d ", v[i]);
	}

	printf("\n");

	return 0;
}
