// Liberação e utilização no main

// É preciso liberar a memória ocupada pela árvore após o uso, evitando vazamentos:
void liberar(struct No* raiz) {
    if (raiz != NULL) {
        liberar(raiz->esquerda);
        liberar(raiz->direita);
        free(raiz);
    }
}

// Por fim, tudo isso se une em um programa completo. No main, vamos criar a árvore e inserir algumas strings:

int main() {
    struct No* raiz = criarNo("Hall de Entrada");
    raiz->esquerda = criarNo("Sala de Estar");
    raiz->direita = criarNo("Biblioteca");
    raiz->esquerda->esquerda = criarNo("Quarto");
 
    printf("Pré-ordem: ");
    preOrdem(raiz);
    printf("\n");
 
    printf("Em ordem: ");
    emOrdem(raiz);
    printf("\n");
 
    printf("Pós-ordem: ");
    posOrdem(raiz);
    printf("\n");
 
    liberar(raiz);
    return 0;
}

// As três formas de percorrer a árvore revelam diferentes lógicas de navegação:


// Pré-ordem visita primeiro o nó raiz, depois os filhos à esquerda e à direita.
 // Em ordem percorre da esquerda até a raiz, e depois vai para a direita — sendo útil para ordenações quando aplicadas em árvores de busca.
 // Pós-ordem visita os filhos antes de tratar a raiz, sendo comum em liberações de memória ou análise de dependências.