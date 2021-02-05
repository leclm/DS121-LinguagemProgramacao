// E17) Faça uma função que receba um vetor de char e um número e retorne no vetor o valores ‘0’ e ‘1’ correspondente ao valor binário de cada posição do número. Considere números de até 32 bits. (Considere o vetor com 33 posições).

#include <stdio.h> // biblioteca com funções de input e output

void func(char vet[], int num) {
    vet =  converterDec2Bin(num);
    return vet;
}

int converterDec2Bin(int valor_decimal) {
    int valor_binario = 0;
    int resto, sequencial = 1;
    while (valor_decimal != 0) {
        resto = valor_decimal % 2;
        valor_decimal /= 2;
        valor_binario += resto * sequencial;
        sequencial *= 10;
    }
    return valor_binario;
}

int main(void) {
    int num;
    char str[33];
    scanf("%d",&num);
    func(str,num);
    printf("%s\n",str);
}