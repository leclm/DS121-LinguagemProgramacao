// E14) Faça uma função isBit que receba dois parâmetros (nro e bit), a função deve retornar FALSO (0) se o n-bit estiver com valor 0 ou, no caso contrário, retornar VERDADEIRO.

#include <stdio.h> // biblioteca com funções de input e output

int isBit(int nro, int bit) {
    int nro2 = nro >> (bit);
    if (nro2 % 2 == 0) {
        return 0;
    } else {
        return 1;
    }
}

int main(void) {
    int num,bit;
    scanf("%d %d",&num,&bit);
    printf("%d\n", isBit(num,bit));
}