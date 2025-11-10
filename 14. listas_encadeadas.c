#include <stdio.h>
#include <stdlib.h>

struct No {
    int dado;
    struct No* proximo;
};

int main() {
    struct No* primeiro = (struct No*) malloc(sizeof(struct No));
    struct No* segundo = (struct No*) malloc(sizeof(struct No));
    struct No* terceiro = (struct No*) malloc(sizeof(struct No));

    primeiro->dado = 10;
    primeiro->proximo = segundo;

    segundo->dado = 20;
    segundo->proximo = terceiro;

    terceiro->dado = 30;
    terceiro->proximo = NULL;

    // Percorrendo a lista
    struct No* atual = primeiro;
    while (atual != NULL) {
        printf("%d\n", atual->dado);
        atual = atual->proximo;
    }

    return 0;
} 

// Estrutura das listas encadeadas
struct No {
    int dado;
    struct No* proximo;
}; 

// Estrutura das listas duplamente encadeadas
struct No {
    int dado;
    struct No* proximo;
    struct No* anterior;
}; 

// Lista circular simples
struct No {
    int dado;
    struct No* proximo; // o último aponta para o primeiro
}; 

// Lista circular duplamente encadeada
struct No {
    int dado;
    struct No* proximo;
    struct No* anterior;
}; 