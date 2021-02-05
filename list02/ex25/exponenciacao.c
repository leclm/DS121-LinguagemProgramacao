// E25) Faça um programa que leia dois valores inteiros (A e B) e apresente o resultado da operação de A elevado a B.

#include <stdio.h> // biblioteca com funções de input e output
#include <stdlib.h> // emulador da prompt do SO, no Windows ele emula todos os comandos do DOS. Possível acessar pastas, mover diretorios, executar programas e etc

int main() {
    int a, b;
    scanf("%i", &a);
    scanf("%i", &b);
    int res = pow(a,b);
    printf("%i", res);
}