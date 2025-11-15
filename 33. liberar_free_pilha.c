// Possibilita que você esvazie (ou libere) os dados da pilha inteira. No caso de uma pilha de tamanho fixo,
//  é importante ter em mente que os elementos não são removidos do vetor de modo físico, mas a pilha perde 
// a referência de onde o topo estava.

// Esvazia a pilha: reinicia o topo
void liberarPilha(Pilha *p) {
    p->topo = -1;  // Define a pilha como vazia novamente
}

// Em pilhas de tamanho dinâmico, liberar significa utilizar o free para desalocar da memória

// Libera todos os nós da pilha dinâmica
void liberarPilha(Pilha *p) {
    while (p->topo != NULL) {
        No *remover = p->topo;
        p->topo = p->topo->prox;
        free(remover);  // Libera a memória alocada
    }
}

// A função free() só é necessária em pilhas implementadas com alocação dinâmica, 
// em que cada elemento é criado com malloc. Nessas pilhas, é preciso liberar manualmente cada nó para evitar 
// vazamentos de memória. Já nas pilhas com tamanho fixo (usando arrays), não se usa free, pois a memória é
//  gerenciada de maneira automática. Para "limpar" a pilha estática, basta redefinir o topo para -1. 
// Isso torna os elementos antigos inacessíveis pela lógica da pilha.