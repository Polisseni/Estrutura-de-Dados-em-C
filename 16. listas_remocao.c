// --- A SUA FUNCAO ---
// Remove o primeiro no da lista
void removeDoInicio(struct No** inicio) {
    // 1. Primeiro checamos se a lista nao esta vazia!
    // Se "inicio" for NULL ou apontar para NULL, nao ha nada a remover.
    if (inicio == NULL || *inicio == NULL ) {
        printf("A lista ja esta vazia! Nada a remover...\n");
        return;
    }

    // 2. Guardamos o endereco do no que vamos remover (primeiro no)
    struct No* noParaRemover = *inicio;

    // 3. O inicio da lista agora passa a ser o segundo no
    // O ponteiro "inicio" passa a apontar para o no seguinte ao que sera removido
    *inicio = (*inicio)->proximo;

    // 4. Liberamos a memoria do no que foi guardado e removido da lista para evitar vazamento de memoria
    free(noParaRemover);
}