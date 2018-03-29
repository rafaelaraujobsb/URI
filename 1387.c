#include <stdio.h>

void somar(int h, int m);

int main(){
	int h,m;

	while(1){
		scanf("%d %d", &h, &m);

		if(m == 0 && h == 0){
			break;
		}

		somar(h, m);
	}

	return 0;
}

void somar(int h, int m){
	printf("%d\n",h+m);
	return;
}
