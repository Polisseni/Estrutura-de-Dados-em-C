// Percorrendo a árvore em ordem (in-order)

// A principal vantagem da BST é poder ser percorrida em ordem crescente com um algoritmo simples. 
// Esse percurso visita primeiro a esquerda, depois o nó atual, e, por fim, a direita.

void emOrdem(struct No* raiz) {
    if (raiz != NULL) {
        emOrdem(raiz->esquerda);
        printf("%s ", raiz->valor);
        emOrdem(raiz->direita);
    }
}
// RELEMBRANDO: O  tipo de travessia visto é ideal para exibir os valores organizados de forma alfabética ou numérica
