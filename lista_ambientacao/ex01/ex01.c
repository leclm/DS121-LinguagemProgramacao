// E1) Faça um programa que apresente os números de 1 a 10, sendo que cada número deve ser impresso em uma linha e os números ímpares deslocados (\t) a direita.

#include <stdio.h> // biblioteca com funções de input e output
#include <stdlib.h> // emulador da prompt do SO, no Windows ele emula todos os comandos do DOS. Possível acessar pastas, mover diretorios, executar programas e etc

int main() {
    int count = 10;
    int i;
    for (i = 1; i <= count; i++) {
        if (i % 2 == 0) {
            printf("\n%d", i); 
        } else {
            printf("\n\t%d", i);
        }        
    } 
}
