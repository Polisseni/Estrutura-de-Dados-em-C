// --- A SUA FUNCAO ---
// Descricao: Procura por um 'valor' em uma lista ligada a partir do 'inicio'
// Retorno:
// - A posicao (indice baseado em zero) do valor, se encontrado
// - -1, se o valor nao estiver na lista
int buscaLinearLista(struct No* incio, int valor) {
    int pos = 0; // Um contador para sabermos a posicao (indice 0,1,2,3...)
    struct No* atual = inicio; // Nosso "ponteiro viajante"

    // Enquanto nao chegarmos no fim da lista(NULL)...
    while (atual != NULL) {
        // Verificamos se o dado do no atual e o que procuramos
        if (atual->dado == valor) {
            // Encontramos e retornamos a posicao
            return pos;   
        }
        // Se nao for, pulamos para o proximo no...
        atual = atual->proximo;
        // ...e incrementamos nosso contador de posicao
        pos++;
    }
    // Se o while acabar, significa que percorremos toda a lista e nao encontramos
    return -1;
}