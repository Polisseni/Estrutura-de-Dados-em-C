// Definindo a estrutura e criação do nó

// Começamos com a definição do nó. Ele conterá uma string (com até 49 caracteres + \0) 
// e dois ponteiros: um para o filho à esquerda e outro para o que está à direita.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
struct No {
    char valor[50];
    struct No* esquerda;
    struct No* direita;
};

// Neste exemplo, vamos definir, de modo manual, nossa árvore. Então, não faremos a função inserir.
// Desse modo, basta criamos uma função para alocar um novo nó na memória:

struct No* criarNo(char* valor) {
    struct No* novo = (struct No*) malloc(sizeof(struct No));
    strcpy(novo->valor, valor);
    novo->esquerda = NULL;
    novo->direita = NULL;
    return novo;
}