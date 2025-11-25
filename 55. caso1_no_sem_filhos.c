// Caso 1: nó sem filhos (folha). Remove o nó e retorna NULL para seu pai

if (raiz->esquerda == NULL && raiz->direita == NULL) {
    free(raiz->valor); // Libera a string alocada dinamicamente
    free(raiz);
    return NULL;
}