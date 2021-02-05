//Faça um programa que apresente os números de pares de 0 a 20, cada número em uma linha.
#include <stdio.h> // biblioteca com funções de input e output
#include <stdlib.h> // emulador da prompt do SO, no Windows ele emula todos os comandos do DOS. Possível acessar pastas, mover diretorios, executar programas e etc

int main() {
    for (int i = 0; i <= 20; i++) {
        if (i % 2 == 0) {
            printf("%d\n", i);
        }
    }
}