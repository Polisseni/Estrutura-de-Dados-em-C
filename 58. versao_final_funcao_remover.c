// Versão final da função de remover:

struct No* remover(struct No* raiz, const char* valor) {
    if (raiz == NULL) 
        return NULL;

    if (strcmp(valor, raiz->valor) < 0) {
        raiz->esquerda = remover(raiz->esquerda, valor);
    } else if (strcmp(valor, raiz->valor) > 0) {
        raiz->direita = remover(raiz->direita, valor);
    } else {
        // Caso 1: sem filhos
        if (raiz->esquerda == NULL && raiz->direita == NULL) {
            free(raiz->valor);
            free(raiz);
            return NULL;
        }

        // Caso 2: um único filho
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

        // Caso 3: dois filhos
        else {
            struct No* sucessor = encontrarMinimo(raiz->direita);
            free(raiz->valor);
            raiz->valor = strdup(sucessor->valor);
            raiz->direita = remover(raiz->direita, sucessor->valor);
        }
    }

    return raiz;
}

// Sobre essa versão final da função remover podemos destacar o seguinte:

// O código visto cobre todos os casos de maneira certa e permite que a memória alocada 
// para as strings também seja liberada quando um nó é removido.
