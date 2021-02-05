// E13) Faça uma função resetBit que receba dois parâmetros (nro e bit), a função deve modificar o valor de nro de tal forma que o n-bit seja modificado para 0 e retornar o novo valor.

#include <stdio.h> // biblioteca com funções de input e output

int resetBit(int nro, int bit) {
    int nro2 = nro -1;
    return nro2;
}

int main(void) {
    int num,bit;
    scanf("%d %d",&num,&bit);
    printf("%d\n",resetBit(num,bit));
}