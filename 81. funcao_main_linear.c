// Função main

// A seguir, temos um exemplo prático mais completo em C, que ilustra o uso de uma tabela hash com operações de inserção, 
// busca e remoção. Esse trecho permite observar como a estrutura se comporta em situações reais, incluindo casos de colisão 
// e tentativas de remoção de elementos inexistentes

int main() {
    // Inicializa a tabela
    for (int i = 0; i < TAMANHO_TABELA; i++) {
        tabela_hash[i].ocupado = 0;
    }
 
    inserir("Ana");
    inserir("Bruno");
    inserir("Carlos");
    inserir("Amanda"); // Pode colidir com Ana
 
    printf("Buscando 'Bruno': %s\n", buscar("Bruno") != -1 ? "Encontrado" : "Não encontrado");
    printf("Buscando 'João': %s\n", buscar("João") != -1 ? "Encontrado" : "Não encontrado");
 
    remover("Carlos");
    remover("João");
 
    return 0;
}

// A tabela hash com endereçamento aberto é uma alternativa elegante ao encadeamento: todas as informações são mantidas 
// dentro do próprio vetor, sem uso de ponteiros ou listas. Isso simplifica o gerenciamento da memória e melhora o cache 
// do processador

// Por outro lado, essa abordagem exige controle cuidadoso de colisões e atenção especial ao estado das posições
// (livre, ocupado e removido)

// Essa técnica é bastante usada em bancos de dados simples, compiladores, mecanismos de busca e em qualquer sistema que 
// precise associar com rapidez uma chave a um valor como logins, dicionários e catálogos, entre outros