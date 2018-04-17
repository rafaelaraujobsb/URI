#include <stdio.h>
#include <stdlib.h>

typedef struct pilha{
	int qtd;
	int *p;
}pilha;

pilha *alocar(int b);
void resolver(pilha *m1);
void adicionar(pilha *m1, pilha *m2);
void remover(pilha *m);

int main(){
	pilha *m1;
	int b,i;

	while(1){
		scanf("%d",&b);

		if(b == 0){
			break;
		}

		m1 = alocar(b);

		for(i=1; i<=b; i++){
			m1->p[i-1] = i;
			m1->qtd++;
		}

		resolver(m1);

	}

	return 0;
}

pilha *alocar(int b){
	pilha *aux;

	aux = (pilha*)malloc(sizeof(pilha));

	aux->qtd = 0;
	aux->p = (int*)malloc(sizeof(int)*b);

	return aux;
}

void resolver(pilha *m1){
	int i=0, t=0;
	pilha *m2;

	printf("-------- %d ------", sizeof(m1->p));

	m2 = alocar(sizeof(m1->p));

	while(m1->qtd > 2 || m2->qtd > 2){
		while(m1->qtd > 2){
			if(i==0 && t==0){
				printf("Discarded cards: %d", m1->p[m1->qtd-1]);
				t=1;
				i=1;
				remover(m1);
			} else if(t==0){
				printf(", %d", m1->p[m1->qtd-1]);
				t=1;
			} else if(t==1){
				adicionar(m1, m2);
				t=0;
			}
		}

		m2->p[m2->qtd+1] = m1->p[1];
		m2->qtd++;

		m2->p[m2->qtd+1] = m1->p[0];
		m2->qtd++;

		m1->qtd = 0;
		break;
	}

	printf("\n");
}

void remover(pilha *m){
	m->p = (int*)realloc(m->p, sizeof(int)*(m->qtd-1));
	m->qtd--;
}

void adicionar(pilha *m1, pilha *m2){
	m2->p[m2->qtd] = m1->p[m2->qtd-1];
	m2->qtd++;
	m1->qtd--;
}
