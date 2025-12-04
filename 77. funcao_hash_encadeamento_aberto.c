// Função hash

// Usamos a mesma função simples para transformar a chave (nome) em um índice do vetor:


int funcao_hash(const char* chave) {
    int soma = 0;
    for (int i = 0; chave[i] != '\0'; i++) {
        soma += chave[i];
    }
    return soma % TAMANHO_TABELA;
}