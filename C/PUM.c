#include <stdio.h>

int main(){
	int e,i;

	scanf("%d", &e);

	for(i=1; i<=e*4;i++){
		if(i%4 == 0){
			printf("PUM\n");
		} else {
			printf("%d ", i);
		}
	}
}
