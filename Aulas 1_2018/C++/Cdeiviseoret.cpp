#include <bits/stdc++.h>

using namespace std;

int main(){
	int l, c, l1=0, ic=-1, fc=-1, maior=0, v=0, seq=0;
	char linha[10];

	scanf("%d %d", &l,&c);

	for(int i=0; i<l; i++){
		scanf("%s", linha);
		for(int j=0; j<c;j++){
			if(linha[j] == '1'){
				if(ic == -1){
					ic = j;
				}else if(j < ic){
					fc = ic;
					ic = j;
				} else if(j > fc){
					fc = j;
				}
				v=1;
			}
		}

		if(ic == -1){
			v=0;
			continue;
		} else if(v == 1){
			l1++;
			l1+=seq;
			v=0;
			seq=0;
		} else {
			seq++;
		}
	}

	if(fc != -1){
		maior = (fc-ic)+1;
	} else if(ic != -1){
		maior = 1;
	}


	printf("%dx%d\n", maior, l1);
	return 0;
}
