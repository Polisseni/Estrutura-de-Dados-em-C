// O algoritmo percorre o vetor e, a cada passo:
// Encontra o menor valor entre os elementos restantes
// Troca esse valor com o primeiro elemento da parte ainda nao ordenada

// Esse processo é repetido, fazendo com que os menores valores sejam gradativamente 
// colocados no início do vetor até que toda a estrutura esteja ordenada. Assim:

// A ordenacao ocorre do inicio ao fim do vetor
// A cada iteracao, a menor (ou maior) chave restante e posicionada de modo certo
// O numero de trocas e reduzido em relacao ao bubble sort, pois ha apenas uma troca por passagem

void trocar(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void selectionSort(int vetor[], int tamanho) {
    for (int i = 0; i < tamanho - 1; i++) {
        int indiceMenor = i;
        for (int j = i + 1; j < tamanho; j++) {
            if (vetor[j] < vetor[indiceMenor]) {
                indiceMenor = j;
            }
        }
        if (indiceMenor != i) {
            trocar(&vetor[i], &vetor[indiceMenor]);
        }
    }
} 

// indiceMenor armazena a posicao do menor valor encontrado
// O segundo laco busca o menor valor a partir da posicao atual
// Apos a busca, ocorre apenas uma troca por iteracao