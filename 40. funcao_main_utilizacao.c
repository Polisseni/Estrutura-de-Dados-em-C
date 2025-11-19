// FUNCAO MAIN

// Neste exemplo, temos a utilizacao da funcao main() para executar 
// toda a estrutura criada e apresentada nos topicos anteriores
int main() {
    Pilha p;
    inicializarPilha(&p);
 
    Pessoa a = {"Ana", 20};
    Pessoa b = {"Bruno", 35};
    Pessoa c = {"Carlos", 28};
 
    push(&p, a);
    push(&p, b);
    push(&p, c);
 
    mostrarPilha(&p);
 
    Pessoa removida;
    pop(&p, &removida);
    printf("Removida: %s, %d\n", removida.nome, removida.idade);
 
    mostrarPilha(&p);
 
    Pessoa topo;
    peek(&p, &topo);
    printf("Topo atual: %s, %d\n", topo.nome, topo.idade);
 
    return 0;
}
// A funcao inicializa a pilha e empilha tres pessoas
// O metodo remove o elemento do topo e mostra novamente a pilha
// A funcao usa peek para inspecionar o novo topo sem o alterar