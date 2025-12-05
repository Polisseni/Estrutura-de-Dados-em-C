// Buscar um nome

// A procura também segue o mesmo padrão de sondagem linear:

int buscar(const char* nome) { 
    int indice = funcao_hash(nome);
    
        for (int i = 0; i < TAMANHO_TABELA; i++) {
                int pos = (indice + i) % TAMANHO_TABELA;
        
                if (tabela_hash[pos].ocupado == 0) {
                    return -1; // Paramos: posição nunca foi usada
            }
    
            if (tabela_hash[pos].ocupado == 1 && strcmp(tabela_hash[pos].nome, nome) == 0) {
                    return pos;
            }
    }
    
        return -1; // Não encontrou
}

// Aqui cabe um ponto ao qual devemos nos atentar!


// Se encontramos uma posição vazia (0), podemos parar o dado, pois não está na tabela
// Se achamos uma posição com o nome certo, retornamos seu índice
// Se o campo está removido (-1) ou ocupado com outro valor, continuamos procurando.