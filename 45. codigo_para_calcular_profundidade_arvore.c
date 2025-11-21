int profundidade(struct No* raiz, struct No* alvo, int nivel) {
    if (raiz == NULL) 
        return -1;
    if (raiz == alvo) 
        return nivel;

    int esq = profundidade(raiz->esquerda, alvo, nivel + 1);
    if (esq != -1) 
        return esq;

    return profundidade(raiz->direita, alvo, nivel + 1);
}

// Como o código funciona:

// A função recebe três parâmetros:
// Raiz: o nó atual da árvore binária.
// Alvo: o nó que queremos encontrar.
// Nivel: o nível atual da árvore que começa em zero.

// Se a raiz for NULL, significa que atingimos o fim da árvore sem encontrar o nó alvo,
// então retornamos –1 para indicar que o nó não está presente.

// Se o nó atual (raiz) for o nó alvo, retornamos nivel, que representa sua profundidade na árvore.

// Chamamos recursivamente a função para a subárvore esquerda, e “nivel +1” aumenta 
// a profundidade à medida que descemos na árvore.

// Se encontrarmos o nó alvo na subárvore esquerda, retornamos essa profundidade.

// Se não encontrarmos na esquerda, chamamos recursivamente para a direita, mantendo a lógica.