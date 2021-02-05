//  Faça um programa que leia uma lista de números inteiros terminados por 0, para cada número lido o programa deve informar o número e se o número é par ou ímpar. Não utilize vetores/matrizes.

#include <stdio.h> // biblioteca com funções de input e output
#include <stdlib.h> // emulador da prompt do SO, no Windows ele emula todos os comandos do DOS. Possível acessar pastas, mover diretorios, executar programas e etc

int main() {
   int n = 1;
    
    while (n != 0) {
        scanf("%d", &n);
        if (n == 0) {
            break;
        } else if (n % 2 == 0) {
            printf("%d par\n", n);
        } else {
            printf("%d impar\n", n);
        }
    }
    return 0;
}