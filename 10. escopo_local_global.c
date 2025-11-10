// ESCOPO LOCAL
//void MinhaFuncao() {
//    int x = 10;  'x' e local. So existe aqui.
//   printf("Dentro da funcao, x = %d\n", x);
//}


// ESCOPO GLOBAL
//int contador_global = 0;  O 'contador' e global.
//
//void incrementar() {
//    contador_global++;  Acessivel aqui.
//}


#include <stdio.h>

// Variavel com escopo GLOBAL
int global = 10;

void mostrarGlobal() {
    printf("Na funcao mostrarGlobal: %d\n", global);
    // ERRO! A variavel local nao existe aqui
    //printf("%d", local);
}

int main () {
    // Variavel com escopo local
    int local = 5;

    printf("Na funcao main (local): %d\n", local);
    printf("Na funcao main (global): %d\n", global);

    mostrarGlobal();

    return 0;
}