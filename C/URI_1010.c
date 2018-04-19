#include <stdio.h>
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    int cod1,cod2,n1,n2;
 	float vn1,vn2,t;
 	scanf("%d %d %f",&cod1,&n1,&vn1);
 	scanf("%d %d %f",&cod2,&n2,&vn2);
 	t=n1*vn1+n2*vn2;
 	printf("VALOR A PAGAR: R$ %.2f\n",t);
    return 0;
}