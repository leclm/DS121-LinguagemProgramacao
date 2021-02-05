// E08) Faça um programa que leia 10 números inteiros e apresente o maior (não utilize vetor/matriz).

#include <stdio.h> // biblioteca com funções de input e output
#include <stdlib.h> // emulador da prompt do SO, no Windows ele emula todos os comandos do DOS. Possível acessar pastas, mover diretorios, executar programas e etc

int main() {
    int n, max;

    for (size_t i = 0; i < 9; i++) {
        scanf("%i", &n);
        if (i == 0) {
            max = n;
        }
        if (n > max) {
            max = n;
        }
    }
    printf("%i\n", max);
}