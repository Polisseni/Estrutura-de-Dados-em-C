// Implementação

// Vamos implementar uma tabela hash simples que armazena nomes (strings). Para isso, começamos definindo nossas estruturas:

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAMANHO_TABELA 10

// Estrutura de um nó da lista ligada
typedef struct Nodo {
    char nome[50];              // Armazena o nome
    struct Nodo* proximo;       // Ponteiro para o próximo nó
} Nodo;

// A tabela hash é um vetor de ponteiros para Nodo
Nodo* tabela_hash[TAMANHO_TABELA];

// Aqui temos:

// Um vetor de ponteiros (tabela_hash) com 10 posições
// Cada posição pode apontar para o início de uma lista ligada
// Cada Nodo da lista guarda um nome e aponta para o próximo nome (se houver)