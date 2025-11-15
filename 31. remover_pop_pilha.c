// Significa retirar o que está no topo. A função a seguir recebe um ponteiro no qual o valor removido será armazenado, 
// caso a pilha não esteja vazia.

void pop(Pilha *p, Elemento *e) {
    if (pilhaVazia(p)) {
        printf("Erro: pilha vazia. Não há elementos para remover.\n");
        e->valor = -1;  // Define um valor padrão para indicar falha
        return;
    }

    *e = p->itens[p->topo];  // Copia o valor do topo
    p->topo--;               // Decrementa o topo
}

// Pop remove o item do topo da pilha e o armazena em e, desde que a pilha não esteja vazia. 
// Em softwares, toda vez que o usuário precisa desfazer uma ação, 
// isso é conhecido como removendo o item que está no topo da pilha ao desfazer a última ação feita.