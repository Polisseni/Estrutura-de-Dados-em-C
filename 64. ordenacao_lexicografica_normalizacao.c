// Ordenação lexicográfica e normalização


// Como a Trie armazena os caracteres em ramos que seguem a ordem do alfabeto (de ‘a’ a ‘z’), podemos percorrê-la em 
// pré-ordem alfabética para imprimir todas as palavras de forma ordenada. Esse percurso pode ser feito de modo recurso

void listarPalavras(struct NoTrie* no, char* buffer, int nivel) {
    if (no->ehFimDePalavra) {
        buffer[nivel] = '\0';
        printf("%s\n", buffer);
    }

    for (int i = 0; i < TAMANHO_ALFABETO; i++) {
        if (no->filhos[i] != NULL) {
            buffer[nivel] = 'a' + i;
            listarPalavras(no->filhos[i], buffer, nivel + 1);
        }
    }
}

void normalizar(const char* entrada, char* saida) {
    int j = 0;
    for (int i = 0; entrada[i] != '\0'; i++) {
        char c = entrada[i];
        if (c >= 'A' && c <= 'Z') c += 32; // Converte para minúsculo
        if (c >= 'a' && c <= 'z') saida[j++] = c; // Mantém apenas letras
    }
    saida[j] = '\0';
}


// Por que é necessário normalizar?


// Nossa Trie foi projetada para funcionar com letras minúsculas de ‘a’ a ‘z’, ou seja, apenas 26 caracteres. Assim, 
// ao tentar usar palavras com letras maiúsculas, espaços e acentos, podem ocorrer erros de acesso fora dos limites,
// retornando possíveis falhas no funcionamento do programa.

// A normalização corrige isso, pois, antes de inserir a palavra na Trie, é feita uma conversão para letras minúsculas, 
// remoção dos espaços, eliminar ou substituir caracteres com acento e garantir que cada caractere esteja entre ‘a’ e ‘z’