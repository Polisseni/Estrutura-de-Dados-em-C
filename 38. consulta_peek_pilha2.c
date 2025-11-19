// CONSULTA (PEEK)

// Veja, a seguir, como o metodo peek consulta o elemento no topo sem remove-lo
void peek(Pilha *p, Pessoa *visualizada) {
    if (pilhaVazia(p)) {
        printf("Pilha vazia. Nada para espiar.\n");
        return;
    }

    *visualizada = p->itens[p->topo];
}
// A funcao e muito util quando queremos saber quem e o ultimo elemento inserido, mas sem o alterar
// O metodo evita mudancas na estrutura da pilha, mantendo o topo inalterado