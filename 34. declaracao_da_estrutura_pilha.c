// A pilha sera implementada com uso de vetor fixo e uma variavel que representa o indice do topo 
// Alem disso, definimos um tipo Pessoa para armazenar elementos mais realistas

#include <stdio.h>
#include <stdlib.h>

#define MAX 5
 
typedef struct {
    char nome[30];
    int idade;
} Pessoa;
 
typedef struct {
    Pessoa itens[MAX];
    int topo;
} Pilha;

// MAX: define a capacidade maxima da pilha
// Pessoa: e um tipo personalizado contendo nome e idade
// Pilha: contem um vetor de Pessoa e um inteiro topo, que 
// representa o indice do ultimo elemento inserido. Quando a pilha esta vazia, o topo e -1
