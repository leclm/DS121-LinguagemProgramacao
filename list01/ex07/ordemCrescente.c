// Faça um programa que leia três números e os apresente em ordem crescente. Apresente um número por linha.

#include <stdio.h> // biblioteca com funções de input e output
#include <stdlib.h> // emulador da prompt do SO, no Windows ele emula todos os comandos do DOS. Possível acessar pastas, mover diretorios, executar programas e etc

int main() {
    int n;
    int vet[3];

    for (size_t i = 0; i < 2; i++) {
        scanf("%d\n", &n);
        vet[i] = n;
    }
    printf(vet[0]);
    printf(vet[1]);
    printf(vet[2]);
    

}