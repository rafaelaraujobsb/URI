#include <stdio.h>

int main(){

	int n, j1=0, j2=0, i;

	int r[2];

	scanf("%d", &n);

	if(n != 0){
		for(i=0; i<n; i++){
			scanf("%d %d", &r[0], &r[1]);

			if(r[0] > r[1]) j1++;
			else if(r[0] < r[1]) j2++;
		}

		printf("%d %d\n", j1,j2);
	}

	return 0;
}
