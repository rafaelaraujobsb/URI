#include <stdio.h>
#include <string.h>

int main(){
	char b[4] = {'N','L','S','O'};
	char v;
	char s[1000];
	int n,i;
	int ind;


	while(1){
		scanf("%d", &n);

		if(n == 0){
			break;
		}

		scanf("%s", s);

		ind = 0;

		for(i=0;i<n;i++){
			v = s[i];
			if(v == 'D'){
				ind++;
			} else {
				ind--;
			}

			if(ind > 3 || ind < -3){
				ind=0;
			}
		}

		printf("%s\n", b[-1]);
	}

	return 0;
}
