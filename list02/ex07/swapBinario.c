// Faça um programa que faça a operação de swap entre as variáveis x e y, sem o uso de uma terceira variável, utilizando apenas operadores binários. 

#include <stdio.h> // biblioteca com funções de input e output
#include <stdlib.h> // emulador da prompt do SO, no Windows ele emula todos os comandos do DOS. Possível acessar pastas, mover diretorios, executar programas e etc

int main(void) {
    int x = 5, y = -10;
    printf("x=%d y=%d\n", x, y);
    int x1 = -x << 1;
    int y2 = y >> 1;
    printf("x=%d y=%d\n", x1, -y2);
}
