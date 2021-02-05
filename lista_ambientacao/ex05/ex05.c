#include <stdio.h> // biblioteca com funções de input e output
#include <stdlib.h> // emulador da prompt do SO, no Windows ele emula todos os comandos do DOS. Possível acessar pastas, mover diretorios, executar programas e etc

//  Faça um programa que apresente os números primos menores que 100.

int main() {
    int i;
    int j;
    int res;
    for (i = 0; i < 100; i++) {
        for (j = 2; j < 9; j++) {
            if (i % j == 0) {
                res++;
            }            
        }     
          
        if (res < 2) {
            printf("%d, ", i);
        } else {
            res = 0;
        }
    }   
}