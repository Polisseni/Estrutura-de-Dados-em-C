// --- SUA FUNCAO ---
// Descricao: Ordena um vetor de inteiros em ordem crescente usando o algoritmo Bubble Sort
void bubblesort(int vetor[], int tamanho) {
    // Laco externo: controla o numero de passadas pelo vetor
    // A cada passada 'i', o i-esimo maior elemento "borbulha" para o lugar certo
    for (int i = 0; i < tamanho - 1; i++) {
        // Laco interno: percorre o vetor comparando pares de vizinhos
        // O limite (tamanho - 1) e uma otimizacao: ele diminui a cada passada, pois os maiores elementos ja estao fixos no final
        for (int j = 0, j < tamanho - 1 - i; j++) {

            // A condicao de comparacao: se o elemento da esquerda for maior que o da direita...
            if (vetor[j] > vetor[j + 1]) {
                // ...troca! Passamos os enderecos dos elementos para a funca o'trocar'
                trocar(&vetor[j], &vetor[j + 1]);
            }
        }
    }
}