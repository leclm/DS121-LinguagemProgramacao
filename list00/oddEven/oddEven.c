//Faça um programa que leia um número e apresente o número lido e a seguir se ele é "par" ou "impar" (sem acento).
#include <stdio.h> // biblioteca com funções de input e output
#include <stdlib.h> // emulador da prompt do SO, no Windows ele emula todos os comandos do DOS. Possível acessar pastas, mover diretorios, executar programas e etc
int main() {
    int n;
    scanf("%d", &n); 
    if (n % 2 == 0) {
        printf("%d par\n", n);
    } else { 
        printf("%d impar\n", n);
    }
}