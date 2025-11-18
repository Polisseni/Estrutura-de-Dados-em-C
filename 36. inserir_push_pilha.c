// INSERIR (PUSH)

// Adiciona um novo elemento no topo da pilha
void push(Pilha *p, Pessoa nova) {
    if (pilhaCheia(p)) {
        printf("Pilha cheia. Não é possível inserir.\n");
        return;
    }
 
    p->topo++;
    p->itens[p->topo] = nova;
}
// O metodo verifica se a pilha esta cheia
// Em caso negativo, o metodo incrementa o topo e insere o novo elemento naquela posicao
// Push a uma operacao rapida e eficiente, com complexidade constante (O(1))