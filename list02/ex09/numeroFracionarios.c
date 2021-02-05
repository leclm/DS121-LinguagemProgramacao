// E09) Faça um programa que leia um número de ponto flutuante e apresente em linhas separadas a parte inteira e a parte fracionária. Na parte fracionário, usem %.3f e a qurba de linha na saída.

#include <stdio.h> // biblioteca com funções de input e output
#include <stdlib.h> // emulador da prompt do SO, no Windows ele emula todos os comandos do DOS. Possível acessar pastas, mover diretorios, executar programas e etc

int main() {
    float n;
    int nInt;
    float nFloat;

    scanf("%f", &n);
    nInt = floor(n);
    nFloat = n - nInt;
    printf("%d\n", nInt);
    printf("%.3f\n", nFloat);
}
