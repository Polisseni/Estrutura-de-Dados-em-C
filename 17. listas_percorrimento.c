// --- A SUA FUNCAO ---
// Percorre a lista a partir do no inicial e imprime o dado de cada no
void listar(struct No* inicio) {
    //1. Criamos um ponteiro "viajante" que comeca no inicio
    struct No* atual = inicio;
    
    // Se a lista estiver vazia, informamos o usuario:
    if (atual == NULL) {
        printf("A lista esta vazia!\n");
    }

    printf("Elementos da lista:\n");
    // 2. Enquanto nosso viajante nao chegar ao fim(NULL)...
    while (atual != NULL) {
        // 3. Mostramos o dado do no de onde ele esta...
        printf("%d", atual->dado);

        // 4. E fazemos ele pular para o proximo no
        atual = atual->proximo;
    } 
}