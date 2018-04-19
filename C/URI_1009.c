#include <stdio.h>
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    char n;
 	double sf,v,sc;
 	scanf("%s %lf %lf",&n,&sf,&v);
 	sc=(v*0.15)+sf;
 	printf("TOTAL = R$ %.2lf\n",sc);
    return 0;
}