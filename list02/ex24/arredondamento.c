// E24) Faça um programa que leia um número de ponto flutuante e apresente o resultado do valor inteiro arredondado. Não use funções da biblioteca. Dica: use o cast para inteiros.

#include <stdio.h> // biblioteca com funções de input e output
#include <stdlib.h> // emulador da prompt do SO, no Windows ele emula todos os comandos do DOS. Possível acessar pastas, mover diretorios, executar programas e etc

int main() {
    float n;
    int nInt;
    float nFloat;

    scanf("%f", &n);
    nInt = n;
    nFloat = n - nInt;    
    if (nFloat < 0.5) {
        printf("%i", nInt);
    } else {
        int res = nInt + 1;
        printf("%i", res);
    }
}