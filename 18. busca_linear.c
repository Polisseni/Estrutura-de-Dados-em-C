// --- A SUA FUNCAO ---
// Descricao: busca por um 'valor' em um array 'lista' de um determinado 'tamanho'
// Retorno:
// - O indice (posicao) da primeira ocorrencia do valor, se encontrado
// - -1, se  o valor nao estiver na lista
int buscaLinear(int lista[], int tamanho, int valor) {
    // Comecamos um loop no inicio (indice 0) ate o fim da lista
    for (int i = 0; i < tamanho; i++) {
        // Em cada passo, comparamos o valor atual com o que buscamos
        if (lista[i] == valor) {
            // Se encontramos, retornamos a posicao (indice) de onde ele esta
            return i;
        }
    }
    // Se o loop terminar e nao encontrarmos nada, retornamos -1;
    return -1;
}