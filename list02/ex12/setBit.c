// E12) Faça uma função setBit que receba dois parâmetros (nro e bit), a função deve modificar o valor de nro de tal forma que o n-bit seja modificado para 1 e retornar o novo valor.

#include <stdio.h> // biblioteca com funções de input e output
#include <stdlib.h> // emulador da prompt do SO, no Windows ele emula todos os comandos do DOS. Possível acessar pastas, mover diretorios, executar programas e etc

int setBit(int nro, int bit) {
    int nro2;
    return nro2 = -(~nro);
}

int main(void) {
    int num,bit;
    scanf("%d %d",&num,&bit);
    printf("%d\n",setBit(num,bit));
}