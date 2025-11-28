// Implementando funções hash simples em C


// Função hash básica: soma dos caracteres e uso de módulo
int hash_simples(const char* str, int tamanho_tabela) {
        int soma = 0;
        for (int i = 0; str[i] != '\0'; i++) {
            soma += str[i];
    }
    return soma % tamanho_tabela;
}

// No exemplo, a função percorre cada caractere da string e acumula seu valor numérico (com base na tabela ASCII). 
// O resultado é, então, reduzido ao intervalo da tabela (por exemplo, 0 a 99 para uma tabela de 100 posições),
// usando o operador módulo (% tamanho_tabela).


// Podemos também aplicar pesos para dar mais importância à posição dos caracteres:

int hash_ponderado(const char* str, int tamanho_tabela) {
        int hash = 0;
        for (int i = 0; str[i] != '\0'; i++) {
            hash += str[i] * (i + 1);
    }
    return hash % tamanho_tabela;
}

// Nesse caso, o valor de cada caractere é multiplicado por sua posição na string, o que tende a gerar uma 
// distribuição um pouco melhor para certas combinações.


// Influência da função hash na eficiência

// A escolha da função hash tem impacto direto na eficiência geral da tabela hash. Uma função ruim, que gera muitos 
// índices repetidos, resulta colisões, que forçam o uso de técnicas adicionais, como listas encadeadas, sondagem linear ou dupla.
// Isso afeta a velocidade das operações e, em casos extremos, pode tornar a tabela hash tão lenta quanto uma lista comum.

// Por outro lado, uma função hash bem planejada e adaptada ao tipo de dados armazenados proporciona acesso rápido, até mesmo 
// em grandes volumes de informação. Por isso, projetar boas funções hash é uma etapa crítica na construção de sistemas de alta 
// performance, desde bancos de dados até caches de páginas da web e verificadores de integridade de arquivos.