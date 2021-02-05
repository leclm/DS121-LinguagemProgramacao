// E15) Faça um programa que leia dois números inteiros e apresente o MAIOR DIVISOR COMUM entre os dois números.

#include <stdio.h> // biblioteca com funções de input e output

int main(void) {
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d\n", mdc(a, b));
}

int mdc(int m, int n) {
    if (n==0) return m;
    return mdc(n, m % n);
}