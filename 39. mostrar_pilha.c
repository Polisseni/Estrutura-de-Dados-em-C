// MOSTRAR PILHA

// Possibilita visualizar todos os elementos da pilha, do topo atE a base
void mostrarPilha(Pilha *p) {
    printf("Pilha (topo -> base):\n");
    for (int i = p->topo; i >= 0; i--) {
        printf("[%s, %d]\n", p->itens[i].nome, p->itens[i].idade);
    }
    printf("\n");
}
// A visualizacao comeca do topo e vai ate o primeiro elemento inserido
// A funcao e util para depuracao ou apresentacao dos dados empilhados