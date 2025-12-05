// Inserção com sondagem linear

// Agora vamos à função de inserir nomes. Se a posição estiver ocupada, seguimos procurando a próxima vaga

void inserir(const char* nome) { 
    int indice = funcao_hash(nome);
    for (int i = 0; i < TAMANHO_TABELA; i++) {
                int pos = (indice + i) % TAMANHO_TABELA;
        
                if (tabela_hash[pos].ocupado == 0 || tabela_hash[pos].ocupado == -1) {
                    strcpy(tabela_hash[pos].nome, nome);
                    tabela_hash[pos].ocupado = 1;
                    return;
            }
    }
        printf("Tabela cheia. Não foi possível inserir '%s'.\n", nome);
}

// Explicação detalhada:

// Começamos do índice gerado pela função hash.
// Se a posição estiver livre (0) ou marcada como removida (-1), inserimos um nome.
// Tentamos a próxima posição (pos = (índice + i) % tamanho), caso a posição esteja ocupada.
// Se percorremos toda a tabela sem sucesso, significa que ela está cheia.