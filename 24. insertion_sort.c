// O primeiro elemento e considerado ja ordenado.
// O algoritmo verifica onde o segundo elemento se encaixa entre os anteriores.
// Os valores maiores que o atual sao deslocados para a direita para abrir espaco.
// Esse processo se repete ate que todos os elementos estejam na posiçao correta.


void insertionSort(int vetor[], int tamanho) {
    for (int i = 1; i < tamanho; i++) {
        int chave = vetor[i];
        int j = i - 1;

        // Move os elementos maiores que a chave uma posição à frente
        while (j >= 0 && vetor[j] > chave) {
            vetor[j + 1] = vetor[j];
            j--;
        }

        vetor[j + 1] = chave;
    }
} 

// No exemplo, vemos que:
// A variavel chave armazena o valor que esta sendo inserido.
// O laco while desloca os valores maiores que chave.
// Quando a posicao correta e encontrada, o valor e inserido com vetor [j+1] = chave.