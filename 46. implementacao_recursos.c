// Implementação de percursos


// Cada um dos percursos vistos pode ser implementado de forma recursiva em C. A função preOrdem, por exemplo, 
// começa imprimindo o valor do nó atual, depois chama a si mesma para o filho esquerda e, em seguida, para o direito. 
// A emOrdem faz o mesmo, mas imprime o valor entre as duas chamadas recursivas. Já a posOrdem só imprime o valor do nó 
// depois de visitar ambos os filhos

void preOrdem(struct No* raiz) {
    if (raiz != NULL) {
        printf("%s ", raiz->valor);
        preOrdem(raiz->esquerda);
        preOrdem(raiz->direita);
    }
}
 
void emOrdem(struct No* raiz) {
    if (raiz != NULL) {
        emOrdem(raiz->esquerda);
        printf("%s ", raiz->valor);
        emOrdem(raiz->direita);
    }
}
 
void posOrdem(struct No* raiz) {
    if (raiz != NULL) {
        posOrdem(raiz->esquerda);
        posOrdem(raiz->direita);
        printf("%s ", raiz->valor);
    }
}