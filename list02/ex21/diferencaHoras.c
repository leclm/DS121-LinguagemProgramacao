// E21) Faça um programa que leia 6 números que representem respectivamente os valores de hora1, minuto1, segundo1, hora2, minuto2 e segundo2. O programa deve verificar as entradas para que hora seja informada entre 0 e 23, minutos e segundos de 0 a 59. Por fim o programa deve mostrar a diferença entre as duas entradas (a 1a menos a 2a) na forma de horas : minutos : segundos. https://www.calculadora-online.xyz/calculadora-horario.php

#include <stdio.h> // biblioteca com funções de input e output

int main() {
    int h1, h2, hf, m1, m2, mf, s1, s2, sf;

    scanf("%i", &h1);
    if (h1 < 0 || h1 > 24) {
        while (h1 < 0 || h1 > 24) {
            scanf("%i", &h1);
        }        
    }
    scanf("%i", &m1);
    if (m1 < 0 || m1 > 59) {
        while (m1 < 0 || m1 > 59) {
            scanf("%i", &m1);
        }
    }
    scanf("%i", &s1);
    if (s1 < 0 || s1 > 59) {
        while (s1 < 0 || s1 > 59) {
            scanf("%i", &s1);
        }
    }
    
    scanf(" %i", &h2);
    if (h2 < 0 || h2 > 24) {
        while (h2 < 0 || h2 > 24) {
            scanf("%i", &h2);
        }
    }
    scanf("%i", &m2);
    if (m2 < 0 || m2 > 59) {
        while (m2 < 0 || m2 > 59) {
            scanf("%i", &m2);
        }
    }
    scanf("%i", &s2);
    if (s2 < 0 || s2 > 59) {
        while (s2 < 0 || s2 > 59) {
            scanf("%i", &s2);
        }
    }

    if (h1 > h2 && m2 > m1 && s2 > s1) {
        hf = (h1 - h2) - 1;
        mf = (60 - m2) - 1;
        sf = 60 - s2;
        printf("\n%i:%i:%i\n", hf, mf, sf);
    } else {
        printf("%i:%i:%i\n", h1-h2, m1-m2, s1-s2);    
    }
}