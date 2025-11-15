// Possibilita consultar o elemento no topo da pilha sem o remover. Isso é útil para inspecionar o último valor inserido.

void peek(Pilha *p, Elemento *e) {
    if (pilhaVazia(p)) {
        printf("Erro: pilha vazia. Não há elementos no topo.\n");
        e->valor = -1;  // Valor padrão para indicar erro
        return;
    }

    *e = p->itens[p->topo];  // Copia o elemento do topo sem alterar a pilha
}

// Peek copia o valor do topo da pilha sem alterar o conteúdo dela, desde que não esteja vazia. Em geral, essa 
// função é utilizada quando há necessidade de exibir o topo da pilha. 
// Na prática, trata-se da ação que será desfeita caso o usuário execute o comando desfazer.