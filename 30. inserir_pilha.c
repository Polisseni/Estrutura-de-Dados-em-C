// Significa colocar novo elemento no topo. No entanto, a função de inserção precisa 
// verificar se há espaço disponível antes de prosseguir. 
// Em implementações com arrays, o topo é representado por um índice incrementado a cada nova inserção

void push(Pilha *p, Elemento e) {
    if (pilhaCheia(p)) {
        printf("Erro: pilha cheia. Não é possível inserir.\n");
        return;
    }
 
    p->topo++;              // Avança o topo
    p->itens[p->topo] = e;  // Insere o novo elemento
}

// Push adiciona um novo item no topo da pilha, respeitando o limite máximo e mantendo o controle da ordem inversa.
// Em softwares, é adicionado um novo elemento a toda ação feita, para que ela possa ser recuperada/desfeita.