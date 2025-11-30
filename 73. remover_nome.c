// Remover um nome

// Excluir um item de uma lista ligada exige um pouco mais de cuidado. Assim, precisamos manter a referência do 
// elemento anterior para reencadear a lista após a remoção. Acompanhe!

void remover(const char* nome) {
        int indice = funcao_hash(nome);
        Nodo* atual = tabela_hash[indice];
        Nodo* anterior = NULL;
    
        while (atual != NULL) {
            if (strcmp(atual->nome, nome) == 0) {
                if (anterior == NULL) {
                    tabela_hash[indice] = atual->proximo; // Era o primeiro
            } else {
                    anterior->proximo = atual->proximo; // "Pula" o nó atual
            }
            free(atual);
            printf("'%s' removido.\n", nome);
            return;
        }
        anterior = atual;
        atual = atual->proximo;
    }

    printf("'%s' não encontrado.\n", nome);
}

// Explicando passo a passo:

// A função procura o nome desejado
// Se for o primeiro da lista, apenas o ponteiro da tabela é atualizado
// Se estiver no meio ou final, o nome anterior aponta para o próximo do nome atual
// A memória com free é liberada