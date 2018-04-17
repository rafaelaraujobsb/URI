#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct lista{
	int qtd;
	struct elemento *ini;
} lista;

typedef struct elemento{
	char string[50];
	struct elemento *prox;
} elemento;

lista *alocarL();
elemento *alocarE();
void ordenar(lista *l, elemento *novo);

int main(){
	int n, i;
	char s[10];
	lista *l;
	elemento *novo;
	
	scanf("%d", &n);
	
	for(i=0; i<n; i++){
		l = alocarL();
		
		while(scanf("%s", s) == 1){
			if(l->qtd == 0){
				novo = alocarE();
				strcpy(novo->string, s);
				l->ini = novo;
				l->qtd++;
			} else {
				novo = alocarE();
				strcpy(novo->string, s);
				ordenar(l, novo);
			}
		}
		
		novo = l->ini;
		while(novo != NULL){
			printf("%s ", novo->string);
			novo = novo->prox;
		}
		
		free(l);
	}
	
	return 0;
}

lista *alocarL(){
	lista *aux;
	
	aux = (lista*)malloc(sizeof(lista));
	
	aux->qtd=0;
	aux->ini=NULL;
	
	return aux;
}

elemento *alocarE(){
	elemento *aux;
	
	aux = (elemento*)malloc(sizeof(elemento));
	
	strcmp(aux->string, " ");
	aux->prox=NULL;
	
	return aux;
}

void ordenar(lista *l, elemento *novo){
	elemento *atual, *ant=NULL, *aux;
	
	atual = l->ini;
	
	while(atual != NULL){	
		if( sizeof(atual->string) < sizeof(novo->string) || sizeof(atual->string) == sizeof(novo->string)){
			break;
		}
		
		ant = atual;
		atual = atual->prox;
	}
	
	if(ant == NULL){
		l->ini = novo;
		novo->prox = atual;
	} else {
		if(sizeof(atual->string) == sizeof(novo->string)){
			aux = atual->prox;
			atual->prox = novo;
			novo->prox = aux;
		} else {
			ant->prox = novo;
			novo->prox = atual;
		}
	}
}
