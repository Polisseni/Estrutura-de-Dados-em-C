#include <stdio.h>

// Esta funcao recebe uma COPIA do valor
void dobrar(int x) {
    x = x * 2;
    printf("Dentro da funcao, o valor da copia e: %d\n", x);
}


int main () {
    int numero = 5;
    printf("Antes de chamar a funcao, o valor original e: %d\n", numero);

    // Passando 'numero' por valor
    dobrar(numero);

    printf("Depois de chamar a funcao, o valor original e: %d\n", numero);

    return 0;
}