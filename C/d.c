#include<stdlib.h>
#include<stdio.h>
#include<string.h>

//variáveis globais
char pilha[1001];
int topo=0, qtd=0;
void push();
void pop();

//main
int main(){
	char entrada[1001];
	int n, i=0;
	
	scanf("%d", &n);
	
	do{
		scanf("%s", entrada);
		//strlen conta e percorre os números exatos da string
		for(i=0; i<=strlen(entrada);i++){
			
			if(entrada[i]=='<'){
				push();	
				topo++;
				
			}
			
			if(entrada[i]=='>'){
				pop();

			}
		}
		printf("%d\n",qtd);
		n--;	
		topo=0;
		qtd=0;
	}while(n!=0);
		
		
	
		return 0;
	}

//funções

void push(){
	pilha[topo]='<';
}

void pop(){
	if(topo!=0){
		pilha[topo-1]=' ';
		topo--;
		qtd++;
	}
}






