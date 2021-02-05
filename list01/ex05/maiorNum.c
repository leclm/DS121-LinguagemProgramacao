//Faça um programa que leia 10 números inteiros e apresente o maior (não utilize vetor/matriz).
#include <stdio.h> // biblioteca com funções de input e output
#include <stdlib.h> // emulador da prompt do SO, no Windows ele emula todos os comandos do DOS. Possível acessar pastas, mover diretorios, executar programas e etc

int main() {
    int n = 0;
    int max = 0;
    for (int i = 0; i < 10; i++) {
        scanf("%d", &n);
        if (i == 0) {
            max = n;
        }
        if (n > max) {
            max = n;
        }
    }
    printf("%d\n", max);
}