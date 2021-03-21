// E17) Faça uma função que receba um vetor de char e um número e retorne no vetor o valores ‘0’ e ‘1’ correspondente ao valor binário de cada posição do número. Considere números de até 32 bits. (Considere o vetor com 33 posições).

#include <stdio.h>
#include <stdlib.h>

void func(char vet[], int num) {
   int bit,ind=31;

   for(bit=0 ; bit<=31 ; bit++ ) {
       if( num & (unsigned)(0x0001 << bit) ) {
           vet[ind] = '1';
       } else {
           vet[ind] = '0';
       }
       ind--;
   }
   vet[32] = '\0';
}

int main(void) {
   int num;
   char str[33];
   scanf("%d",&num);
   func(str,num);
   printf("%s\n",str);
}