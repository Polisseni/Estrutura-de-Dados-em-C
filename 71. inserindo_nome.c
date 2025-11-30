// Inserir um nome

// Para inserir um nome, criamos um nó e o adicionamos ao início da lista ligada correspondente à posição gerada pela função hash:

void inserir(const char* nome) {
    int indice = funcao_hash(nome); // Descobre onde armazenar
    // Cria um nó
    Nodo* novo = (Nodo*)malloc(sizeof(Nodo));
    strcpy(novo->nome, nome);

    // Insere no início da lista (head)
    novo->proximo = tabela_hash[indice];
    tabela_hash[indice] = novo;
}

// No código que vimos:

// Não estamos sobrescrevendo o valor já presente no índice, mas, sim, encadeando os dados
// Inserir no início da lista é rápido (afinal, não é necessário percorrer a lista toda)
// É possível que nomes diferentes com o mesmo índice sejam organizados como uma pequena fila, como consequência