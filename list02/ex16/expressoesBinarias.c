/* E16) Faça um programa que apresente (imprima com %x os resultados das expressões):
a) O valor decimal e em hexadecimal de 0x55 e do resultado do operador ~0x55
b) O valor decimal e em hexadecimal de 0x09 e o resultado da operação 0x09 << 2
c) O valor decimal e em hexadecimal de 0x09 e o resultado da operação 0x09 >> 2
d) O valor decimal e em hexadecimal de 0xFF e o resultado da operação 0xFF >> 2
e) O valor decimal e em hexadecimal de 0xFF e o resultado da operação 0xFF << 2
*/

#include <stdio.h> // biblioteca com funções de input e output

int main() {
    int r1 = ~0x55;
    printf("a) 82 0x55 %x\n", r1);

    int r2 = 0x09 << 2;
    printf("b) 9 0x09 %x\n", r2);
    
    int r3 = 0x09 >> 2;
    printf("c) 9 0x09 %x\n", r3);
    
    int r4 = 0xFF >> 2;
    printf("d) 255 0xFF %x\n", r4);
    
    int r5 = 0xFF << 2;
    printf("e) 255 0xFF %x\n", r5);
}