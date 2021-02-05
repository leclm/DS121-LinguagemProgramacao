//E23) Escreva um programa na linguagem C que pede os coeficientes de uma equação do segundo grau e exibe as raízes da equação, sejam elas reais ou complexas. Será necessário usar a função sqrt para calcular a raiz quadrada, essa função está presente no cabeçalho math.h.

#include <stdio.h>
#include <math.h>
#include <string.h>

int main(void) {
    int a,b,c, delta;
    double x1,x2;
    scanf("%d %d %d",&a,&b,&c);
    delta = (b*b) - (4*a*c);
    x1 = (- b + sqrt(delta))/(2*a);
    x2 = (- b - sqrt(delta))/(2*a);

    printf("%.2f\n%.2f\n",x1,x2);
}