// E19) Faça um programa que leia um número inteiro e apresente o valor correspondente em decimal, hexadecimal, octal e binário. Cada número em uma linha (respeite a ordem dos elementos).

#include <stdio.h>
#include <math.h>
#include <string.h>
 
//Chamadas das funções
long long converterDec2Bin(int valor_decimal);
int converterDec2Oct(int valor_decimal);
long long converterOct2Dec(int valor_octal);
 
int main() {
     
    //Variáveis usadas
    int valor_octal;
    long long valor_binario;
    int valor_decimal, cociente;
    int sequencial, valor_temp, tamanho_string;
    char valor_hexa[100];
    
    scanf("%d", &valor_decimal);
    printf("%d\n", valor_decimal);
    
    sequencial = 0;
    cociente = valor_decimal;
        
    //Enquanto tiver cociente
    while (cociente != 0) {
        //Pega o resto da divisão por 16
        valor_temp = cociente % 16;
            
        //Se for menor que 10, soma com 48 (tabela ascii - parte de números)
        if( valor_temp < 10)
            valor_temp = valor_temp + 48;
                
        //Senão, soma com 55 (tabela ascii - parte de letras)
        else
            valor_temp = valor_temp + 55;
            
        //Joga o caracter na sequência da string
        valor_hexa[sequencial++] = valor_temp;
            
        //Divide o resto por 16
        cociente = cociente / 16;
    }
    valor_hexa[sequencial++] = '\0';
    printf("%s\n", valor_hexa);
    printf("%d\n", converterDec2Oct(valor_decimal));
    printf("%lld\n", converterDec2Bin(valor_decimal));
    return 0;
}
 
//Função para converter Decimal para Binário
long long converterDec2Bin(int valor_decimal) {
    long long valor_binario = 0;
    int resto, sequencial = 1;
 
    //Enquanto o valor decimal for diferente de zero
    while (valor_decimal != 0)
    {
        //Pega o resto da divisão
        resto = valor_decimal % 2;
         
        //Divide o valor decimal por 2
        valor_decimal /= 2;
         
        //Incrementa o valor binário, multiplicando o resto da divisão pelo sequencial
        valor_binario += resto * sequencial;
         
        //Multiplica o sequencial por 10
        sequencial *= 10;
    }
     
    return valor_binario;
}
 
//Função para converter Decimal para Octal
int converterDec2Oct(int valor_decimal) {
    int valor_octal = 0, sequencia = 1;
     
    //Enquanto o valor decimal for diferente de zero
    while (valor_decimal != 0)
    {
        //Incrementa o valor octal com o resto da divisão do decimal por 8 multiplicado pelo sequencial
        valor_octal += (valor_decimal % 8) * sequencia;
         
        //O valor decimal será dividido por 8
        valor_decimal /= 8;
         
        //O sequencial sera multiplicado por 10
        sequencia *= 10;
    }
 
    return valor_octal;
}