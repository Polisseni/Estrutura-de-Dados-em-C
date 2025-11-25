// Caso 2: nó com um único filho. Substituímos o nó pelo filho correspondente:

else if (raiz->esquerda == NULL) {
    struct No* temp = raiz->direita;
    free(raiz->valor);
    free(raiz);
    return temp;
} else if (raiz->direita == NULL) {
    struct No* temp = raiz->esquerda;
    free(raiz->valor);
    free(raiz);
    return temp;
}