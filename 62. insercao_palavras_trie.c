// Inserção de palavras na Trie


// Percorremos caractere por caractere e criamos os nós intermediários se eles ainda não existirem. 
// A marcação de fim de palavra é essencial para distinguir palavras completas de simples prefixos

void
(struct NoTrie* raiz, const char* palavra) {
    struct NoTrie* atual = raiz;

    for (int i = 0; palavra[i] != '\0'; i++) {
        int indice = palavra[i] - 'a';

        if (atual->filhos[indice] == NULL) {
            atual->filhos[indice] = criarNo();
        }
        atual = atual->filhos[indice];
    }
    atual->ehFimDePalavra = true;
}

// O uso de palavra[i] - 'a' transforma letras em índices de 0 a 25. Assim, a letra 'c' vira índice 2, por exemplo.
// Isso permite acesso direto ao filho correspondente, sem necessidade de laços ou comparações