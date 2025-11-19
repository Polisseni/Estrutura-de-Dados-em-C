// REMOVER (POP)

// Retira o elemento do topo da pilha
void pop(Pilha *p, Pessoa *removida) {
    if (pilhaVazia(p)) {
        printf("Pilha vazia. Não é possível remover.\n");
        return;
    }

    *removida = p->itens[p->topo];
    p->topo--;
}
// O metodo verifica se a pilha esta vazia antes de tentar remover
// A funcao copia o conteudo do topo para o ponteiro removido, e entao reduz o topo
// Isso simula bem o comportamento LIFO (Last In, First Out)