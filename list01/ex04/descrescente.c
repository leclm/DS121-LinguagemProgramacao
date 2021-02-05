//Faça um programa que apresente os números de 20 a 1 (em ordem decrescente), um número em cada linha.
#include <stdio.h> // biblioteca com funções de input e output
#include <stdlib.h> // emulador da prompt do SO, no Windows ele emula todos os comandos do DOS. Possível acessar pastas, mover diretorios, executar programas e etc

int main() {
    for (int i = 20; i >= 1; i--) {
        printf("%d\n", i);
    }
}