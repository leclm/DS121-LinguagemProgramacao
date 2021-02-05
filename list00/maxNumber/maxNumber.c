#include <stdio.h> // biblioteca com funções de input e output
#include <stdlib.h> // emulador da prompt do SO, no Windows ele emula todos os comandos do DOS. Possível acessar pastas, mover diretorios, executar programas e etc

int main() {
    int n1, n2, n3;
    scanf("%d\n", &n1);
    scanf("%d\n", &n2);
    scanf("%d", &n3);

    int max = n1;
    int min = n1;
    
    if (n1 < n2 ) {
       max = n2;
       if (n2 < n3) {
           max = n3;
           printf("%d\n", n3);
       } else {
           printf("%d\n", n2);
       }
    } else if (n1 < n3) {
        max = n3;
        printf("%d\n", n3);
    } else {
        printf("%d\n", n1);
    }
}