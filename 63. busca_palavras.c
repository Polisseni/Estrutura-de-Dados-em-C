// Busca de palavras

// É muito parecida com a inserção, ou seja, percorremos os nós conforme os caracteres da palavra. 
// Se em algum momento o caminho não existir, significa que a palavra não está presente. E, mesmo se todos os caracteres
//  forem encontrados, o nó final precisa estar marcado como fim de palavra
bool buscar(struct NoTrie* raiz, const char* palavra) {
    struct NoTrie* atual = raiz;

    for (int i = 0; palavra[i] != '\0'; i++) {
        int indice = palavra[i] - 'a';

        if (atual->filhos[indice] == NULL)
            return false;

        atual = atual->filhos[indice];
    }
    return atual != NULL && atual->ehFimDePalavra;
}

// A função retorna true apenas se a sequência existir e estiver marcada como palavra completa. Isso evita confundir 
// prefixos com palavras reais.