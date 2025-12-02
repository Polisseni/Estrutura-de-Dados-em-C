// Estrutura de dados

// Vamos armazenar nomes em uma tabela hash simples. Primeiro, criamos uma struct para representar uma entrada da tabela


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAMANHO_TABELA 10
typedef struct {
    char nome[50];
    int ocupado; // 0 = vazio, 1 = ocupado, -1 = removido
} Entrada;

Entrada tabela_hash[TAMANHO_TABELA];

// Explicando:

// Cada posição do vetor contém uma Entrada, que armazena um nome e um indicador de estado (ocupado)
// Usamos -1 para sinalizar que ali já houve algo, mas foi removido. Isso é importante para manter a 
// busca funcionando de maneira correta.