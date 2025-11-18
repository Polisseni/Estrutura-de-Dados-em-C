// INICIALIZACAO E VERIFICACAO


// A pilha deve ser inicializada com o valor de topo = -1, indicando que esta vazia
void inicializarPilha(Pilha *p) {
    p->topo = -1;
}
// Tal procedimento prepara a pilha para uso
// A atribuicao de -1 ao topo e uma convencao que facilita a verificacao de vazios e insercoes futuras


// A seguir, verificamos se a pilha esta vazia, ou seja, se nao ha elementos inseridos
int pilhaVazia(Pilha *p) {
    return p->topo == -1;
}
// O valor retorna verdadeiro (1) se o topo for igual a -1
// A verificacao evitar remocoes em uma pilha ja vazia, o que causaria erro


// A seguir, buscamos se o numero maximo de elementos ja foi atingido
int pilhaCheia(Pilha *p) {
    return p->topo == MAX - 1;
}
// O valor retorna verdadeiro (1) se o topo estiver no ultimo indice possivel do vetor
// A verificacao evita insercoes que ultrapassariam o tamanho permitido da pilha