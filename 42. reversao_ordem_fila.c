// Uso de pilha para inverter uma fila

// Transferir os elementos da fila para a pilha
// Como a pilha inverte a ordem de forma natural, o último da fila será o topo da pilha.


// Transferir os elementos da pilha de volta para outra fila
// Como resultado, temos uma nova fila com os elementos na ordem invertida


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
#define MAX 50
 
typedef struct {
    char nome[30];
    int idade;
} Pessoa;
 
typedef struct {
    Pessoa dados[MAX];
    int inicio, fim;
} Fila;
 
typedef struct {
    Pessoa dados[MAX];
    int topo;
} Pilha;
 
void inicializarFila(Fila *f) {
    f->inicio = 0;
    f->fim = 0;
}
 
void inicializarPilha(Pilha *p) {
    p->topo = -1;
}
 
void inserir(Fila *f, Pessoa p) {
    if (f->fim < MAX) {
        f->dados[f->fim++] = p;
    }
}
 
Pessoa remover(Fila *f) {
    return f->dados[f->inicio++];
}
 
void push(Pilha *p, Pessoa pes) {
    if (p->topo < MAX - 1) {
        p->dados[++p->topo] = pes;
    }
}
 
Pessoa pop(Pilha *p) {
    return p->dados[p->topo--];
}
 
void exibirFila(Fila f) {
    for (int i = f.inicio; i < f.fim; i++) {
        printf("Nome: %s | Idade: %d\n", f.dados[i].nome, f.dados[i].idade);
    }
}
 
int main() {
    Fila filaOriginal, filaInvertida;
    Pilha auxiliar;
 
    inicializarFila(&filaOriginal);
    inicializarFila(&filaInvertida);
    inicializarPilha(&auxiliar);
 
    Pessoa pessoas[] = {
        {"Carlos", 45}, {"Joana", 62}, {"Lucas", 30}, {"Maria", 75}
    };
 
    for (int i = 0; i < 4; i++) {
        inserir(&filaOriginal, pessoas[i]);
    }
 
    while (filaOriginal.inicio < filaOriginal.fim) {
        push(&auxiliar, remover(&filaOriginal));
    }
 
    while (auxiliar.topo >= 0) {
        inserir(&filaInvertida, pop(&auxiliar));
    }
 
    printf("Fila invertida:\n");
    exibirFila(filaInvertida);
 
    return 0;
}
// A lógica principal também ocorre dentro da função main(), na qual é aplicada a comunicação entre as estruturas. 
// Primeiro, os elementos são inseridos em uma fila na ordem original. Em seguida, todos os elementos dessa fila são 
// removidos (dequeue) um a um e empilhados (push) em uma pilha auxiliar. Como a pilha segue o comportamento LIFO, ao 
// transferir novamente os elementos da pilha para uma nova fila (filaInvertida), conseguimos inverter a ordem inicial dos dados.




// Esse tipo de integração é bastante útil quando se deseja reorganizar dados de forma reversa, utilizando o comportamento 
// natural da pilha como ferramenta auxiliar. A estrutura da fila permanece organizada e a pilha entra como apoio temporário, 
// reforçando o conceito de que o uso combinado de diferentes estruturas ajuda a resolver problemas de forma mais eficiente e flexível.







