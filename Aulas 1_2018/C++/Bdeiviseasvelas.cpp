#include <bits/stdc++.h>

using namespace std;

int main(){
	int soma, divisao, resto, velas, velasN, r;

	scanf("%d %d", &velas, &velasN);

	divisao = velas/velasN;
	resto = velas%velasN;
	soma = divisao;
	r = divisao+resto;

	while(r >= velasN){
		divisao = r/velasN;
		resto = r%velasN;
		soma += divisao;
		r = divisao+resto;
	}

	soma+=velas;

	printf("%d\n", soma);

	return 0;
}
