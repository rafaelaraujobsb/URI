#include <stdio.h>
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    double A,B,C;
 	scanf("%lf %lf %lf",&A,&B,&C);
 	printf("TRIANGULO: %.3lf\n",(A*C)/2);
 	printf("CIRCULO: %.3lf\n",3.14159*C*C);
 	printf("TRAPEZIO: %.3lf\n",(C*(A+B))/2);
 	printf("QUADRADO: %.3lf\n",B*B);
 	printf("RETANGULO: %.3lf\n",A*B);
    return 0;
}