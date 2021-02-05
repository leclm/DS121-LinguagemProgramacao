// E06) Faça um programa que faça a operação de swap entre as variáveis x e y, sem o uso de uma terceira variável, utilizando apenas operadores aritméticos.

#include <stdio.h>
#include <string.h>

int main( void ) {
    int x=5, y=-10;
    printf("x=%d y=%d\n",x,y);
    x -= y; // 5 - (-10) = 15
    y += x; // -10 + (15) = 5
    x -= y; // 15 - 5 = 10
    x = -x; // -10
    printf("x=%d y=%d\n",x,y);
}

