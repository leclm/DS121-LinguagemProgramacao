/* Faça um programa que leia duas strings,
 * compare as strings e apresente na tela os valores
 * "0" se forem iguais, 
 * "-1" se str1 for menor que str2
 * "1" se str1 for maior que str2
*/

#include <stdio.h> // biblioteca com funções de input e output
#include <stdlib.h> // emulador da prompt do SO, no Windows ele emula todos os comandos do DOS. Possível acessar pastas, mover diretorios, executar programas e etc

int main() {
    unsigned char s1[100], s2[100];
    int c1 = 0;
    int c2 = 0;
    int e1 = 0;
    int e2 = 0;
    int sum1 = 0;
    int sum2 = 0;
    
    gets(s1);
    gets(s2);

    while (s1[c1] != '\0') {
       e1 = s1[c1];
       sum1 += e1;
       c1++; 
    }

    while (s2[c2] != '\0') {
        e2 = s2[c2];
        sum2 += e2;
        c2++; 
    }
    
    if (sum1 > sum2) {
        printf("1\n");
        printf("sum1 = %d e sum2 = %d\n", sum1, sum2);
    } else if (sum1 < sum2) {
        printf("-1\n");
        printf("sum1 = %d e sum2 = %d\n", sum1, sum2);
    } else {
        printf("0\n");
        printf("sum1 = %d e sum2 = %d\n", sum1, sum2);
    }

    return 0; 
}