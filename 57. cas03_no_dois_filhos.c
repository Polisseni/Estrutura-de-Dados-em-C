// Caso 3: nó com dois filhos. Encontra a menor string da subárvore direita (ordem alfabética), 
// copia para o nó atual e remove o nó duplicado de maneira recursiva. A função strdup() cria uma cópia da string.

else {
    struct No* temp = raiz->direita;
    while (temp->esquerda != NULL)
        temp = temp->esquerda;
 
    free(raiz->valor);
    raiz->valor = strdup(temp->valor); // Copia a string do sucessor
    raiz->direita = remover(raiz->direita, temp->valor);
}