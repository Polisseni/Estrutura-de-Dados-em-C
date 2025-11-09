#include <stdio.h>


void saudaçao() {
    printf("Olá, mundo!\n");
}


int main () {
    // Declarando um ponteiro 'ptr' para uma função
    // que não retorna nada (void) e não tem parâmetros.
    void (*ptr)() = saudaçao;

    // Chamando a função através do ponteiro
    ptr();

    return 0;
}