// Função hash

// Precisamos transformar uma string (nome) em um índice de vetor. Para isso, criamos uma função hash simples,
// que soma os valores dos caracteres e aplica o operador % para restringir ao tamanho da tabela

int funcao_hash(const char* chave) {
        int soma = 0;
        for (int i = 0; chave[i] != '\0'; i++) {
            soma += chave[i];
    }
    return soma % TAMANHO_TABELA;
}


// Agora que vimos a função que transforma a strings em um índice de vetor, vejamos na prática como isso se dá!

// Exemplo
// Se o nome for "Ana", a soma dos valores ASCII será algo como 65 + 110 + 97 = 272.
// Com TAMANHO_TABELA = 10, temos 272 % 10 = 2.
// Ou seja, "Ana" será armazenada na posição 2 da tabela.