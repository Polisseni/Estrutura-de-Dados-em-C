// Exemplo completo com função main


// Para consolidar os conceitos apresentados até aqui, veja a seguir um exemplo completo em C, que demonstra a criação da 
// estrutura, inserção de palavras normalizadas em uma árvore Trie e a listagem final dos elementos armazenados:

int main() {
    struct NoTrie* raiz = criarNo();
    char normalizada[100];
 
    normalizar("Pegadas de Lama", normalizada);
    inserir(raiz, normalizada);
 
    normalizar("Chave perdida", normalizada);
    inserir(raiz, normalizada);
 
    normalizar("Livro com página faltando", normalizada);
    inserir(raiz, normalizada);
 
    normalizar("Lençol manchado", normalizada);
    inserir(raiz, normalizada);
 
    normalizar("Gaveta perdida", normalizada);
    inserir(raiz, normalizada);

    char buffer[100]; // Tamanho máximo de palavra suportado
    listarPalavras(raiz, buffer, 0);

    return 0;
}

// Saída esperada:

// pegadasdelama  
// chaveperdida  
// livrocompaginafaltando  
// lencolmanchado  
// gavetaperdida

// Para finalizar, a estrutura Trie é muito eficiente para cenários que envolvem grandes volumes de palavras, em especial, 
// quando há muitos prefixos repetidos. Ela oferece um tempo de busca proporcional ao tamanho da palavra, independentemente 
// da quantidade total de palavras armazenadas. Por isso, ela é muito usada em sistemas de autocompletar, 
// filtros de spam e até em inteligências artificiais.