#include <stdio.h>

// A funcao agora recebem um ENDERECO (ponteiro para int)
void dobrar(int* x) {
    // Acessamos o valor NO ENDERECO DA MEMORIA e modificamos
    *x = (*x) * 2;
    printf("Dentro da funcao, o valor da copia e: %d\n", x);
}


int main () {
    int numero = 5;
    printf("Antes de chamar a funcao, o valor original e: %d\n", numero);

    // Passando o endereco de 'numero' com o operador &
    dobrar(&numero);

    printf("Depois de chamar a funcao, o valor original e: %d\n", numero);

    return 0;
}