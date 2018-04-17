#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	int tam, t;
	char nf[2]; //n final
	long n,i;
	long long *v;
	char c[6];

	while(scanf("%ld", &n) == 1){
		t=0;

		v = (long long*)malloc(sizeof(long long)*n);

		for(i=0; i<n; i++){
			scanf("%lld", &v[i]);

			sprintf(c, "%lld", v[i]);

			tam = strlen(c);
			nf[0] = c[tam-1];

			t += atoi(nf);
			//t = strtol(nf, NULL, 10); //var *char, NULL, base 10

			if(t > 9){
				t = t%2;
			}
		}

		printf("%d", t%2);
		printf("\n");

		free(v);
	}

    return 0;
}
