#include <bits/stdc++.h>

using namespace std;

int main(){
	int b, v, tam;
	bool f=true;
	string x;

	scanf("%d", &b);
	for(int i=b+1; f==true; i++){
		x = to_string(i);
		tam = x.length();

		if(tam > 1){
			for(int j=0; j<x.length()-1; j++){
				v=0;

				for(int k=j+1; k<x.length(); k++){
					if(x[j] == x[k]){
						v=1;
						break;				
					}			
				}

				if(v==1) break;
			}

			if(v==0) break;
		} else break;
	}	

	printf("%s\n", x.c_str());

	return 0;
}
