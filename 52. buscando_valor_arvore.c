// Buscando um valor na árvore

// Procurar em uma BST é muito mais eficiente do que em uma lista, pelo simples fato de que porque podemos 
// eliminar metade dos elementos a cada comparação

int buscar(struct No* raiz, const char* chave) {
    if (raiz == NULL) 
        return 0;
    
        if (strcmp(chave, raiz->valor) == 0)
            return 1;
        else if (strcmp(chave, raiz->valor) < 0)
            return buscar(raiz->esquerda, chave);
        else
            return buscar(raiz->direita, chave);
}

// O algoritmo segue a lógica da inserção: se o valor é menor, buscamos à esquerda. 
// Se maior, à direita. Quando encontramos, retornamos 1; caso contrário, 0