// --- A SUA FUNCAO ---
// Descricao: Busca por um 'valor' em um 'vetor' ORDENADO de um 'tamanho' especifico
// Pre-requisito: o 'vetor' DEVE estar em ordem CRESCENTE
// Retorno: O indice do valor, caso encontrado
// -1 se o valor nao estiver no vetor
int buscaBinaria(int vetor[], int tamanho, int valor) {
    int inicio = 0;
    int fim = tamanho;

    // O loop continua enquanto a "fatia" de busca for valida (incio <= fim)
    while (inicio <= fim){
        // int meio = (inicio + fim) /2; // forma comum, mas pode dar Overflow com numeros muito grandes

        // Forma mais segura para calcular o meio, evitando overflow:
        int meio = inicio + (fim - inicio) / 2;

        // 1. Se o valor estiver exatamente no meio, encontramos!
        if (vetor[meio] == valor) {
            return meio; // Retorna o indice onde o valor foi encontrado
        }
        // 2. Se o valor no meio for menor que o buscado, significa que nosso alvo so pode estar na metade da direita (maior)
        else if (vetor[meio] < valor) {
            inicio = meio + 1; // Descartamos a metade da esquerda
        }
        // 3. Se o valor no meio for maior que o buscado, significa que nosso alvo so pode estar na metade da esquerda (menor)
        else {
            fim = meio - 1;
        }
    }

    // Se o loop terminar, significa que o 'inicio' ultrapassou o 'fim' e o valor nao foi encontrado no vetor
    return -1;
}