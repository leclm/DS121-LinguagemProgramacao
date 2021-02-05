/*  E20) Faça um programa que apresente um “menu com 4 opções”, leia um número inteiro entre 1 e 4 indicando a opção do menu e para cada valor lido imprima, correspondentemente, as frases “opção 1”, “opção 2”, “opção 3”, “opção 4”. Use o comando switch para resolver esse exercício. O programa encerra quando foi escolhido a opção 4, nas demais condições deverá apresentar o menu novamente e ler uma nova opção.
Sempre termine as strings com quebra de linha. */
 
#include <stdio.h>
#include <string.h>

int main() {
    char opc = ' ';
    while (opc != '4') {
        printf("1 - Opcao 1\n");
        printf("2 - Opcao 2\n");
        printf("3 - Opcao 3\n");
        printf("4 - Opcao 4\n");
        scanf("\n%c", &opc); // pode ser scanf(" %c", &opc); tbm. Precisamos consumir a nova linha
         
        switch(opc) {
            case '1':
                printf("Opcao 1\n");
                break;
            case '2':
                printf("Opcao 2\n");
                break;
            case '3':
                printf("Opcao 3\n");
                break;
            case '4':
                printf("Opcao 4\n");
                break;
        }
    }     
    return 0;
}