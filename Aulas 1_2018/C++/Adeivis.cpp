#include <bits/stdc++.h>

using namespace std;

int main(){
	int n,v, cont=0, maior=0;

	scanf("%d", &n);

	vector<int> cds;

	for(int i=0; i<n; i++){
		scanf("%d", &v);
		cds.push_back(v);

		if(maior < v){
			maior = v;
		}
	}

	for(int i=0; i<n; i++){
		cont += maior - cds[i];
	}

	printf("%d\n", cont);

	return 0;
}
