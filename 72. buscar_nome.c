// Buscar um nome

// A procura percorre a lista da posição indicada pela função hash e compara nome por nome até encontrar o desejado

Nodo* buscar(const char* nome) {
        int indice = funcao_hash(nome);
        Nodo* atual = tabela_hash[indice];
    
        while (atual != NULL) {
            if (strcmp(atual->nome, nome) == 0) {
                return atual; // Encontrou
        }
        atual = atual->proximo;
    }

    return NULL; // Não está na lista
}

// Explicando:

// Usamos strcmp para comparar strings
// Se o nome for encontrado, retornamos um ponteiro para o n
// Se não, retornamos NULL, indicando que o nome não foi cadastrado