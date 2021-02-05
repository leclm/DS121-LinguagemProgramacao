#include <stdio.h> // biblioteca com funções de input e output
#include <stdlib.h> // emulador da prompt do SO, no Windows ele emula todos os comandos do DOS. Possível acessar pastas, mover diretorios, executar programas e etc

int main() {
    int i;
    int count = 0;
    for (i = 1; i <= 15; i++) {
        count++;
        if (count == 1 || count == 3 || count == 6 || count == 10) {
            printf("%d\n", i);
        } else {
            printf("%d ", i);
        }
    }
}