// O primeiro passo para utilizar uma fila com mais significado e definir o tipo de dado que sera armazenado. No nosso exemplo, cada item da fila representa uma pessoa
typedef struct {
    char nome[30];
    int idade;
} Pessoa;

// A fila em si precisa de um array para armazenar os elementos e as variaveis de controle para saber onde inserir e remover
#include <stdio.h>
#include <stdlib.h>

#define MAX 5

typedef struct {
    Pessoa itens[MAX];
    int inicio;
    int fim;
    int total;
} Fila;
// A struct Fila guarda os dados e controla o estado da fila com indices e contador de elementos

// Antes de usar a fila, seus indices e contador precisam ser configurados
void inicializarFila(Fila *f) {
    f->inicio = 0;
    f->fim = 0;
    f->total = 0;
}
// A inicializacao define o ponto de partida da fila, visando ao seu funcionamento correto desde o inicio

// É importante para sabermos se a fila atingiu a capacidade maxima
int filaCheia(Fila *f) {
    return f->total == MAX;
}

// Fazer tal verificacao tambem confirma se ha elementos disponiveis para remocao
int filaVazia(Fila *f) {
    return f->total == 0;
}

// Fila cheia impede novas insercoes. Logo, essa verificacao evita sobreposicao de dados. Fila vazia, por sua vez, impede remocoes, o que e importante para evitar acesso a posicoes invalidas

// Enqueue adiciona um novo item ao final da fila, se houver espaco
void inserir(Fila *f, Pessoa p) {
    if (f->total == MAX) {
        printf("Fila cheia. Não é possível inserir.\n");
        return;
    }
 
    f->itens[f->fim] = p;
    f->fim = (f->fim + 1) % MAX;
    f->total++;
}
// dequeue remove o elemento da frente da fila
void remover(Fila *f, Pessoa *p) {
    if (filaVazia(f)) {
        printf("Fila vazia. Não é possível remover.\n");
        return;
    }

    *p = f->itens[f->inicio];             
    f->inicio = (f->inicio + 1) % MAX;     
    f->total--;                        
}  
// Dequeue insere no final e atualiza os controles da fila, e o uso do modulo mantem a circularidade.
// A remocao retorna o primeiro elemento e ajusta a posicao de inicio da fila.

// Mostrar fila
// Exibe todos os elementos na ordem em que foram inseridos, como podemos ver adiante
void mostrarFila(Fila *f) {
    printf("Fila: ");
    for (int i = 0, idx = f->inicio; i < f->total; i++, idx = (idx + 1) % MAX) {
        printf("[%s, %d] ", f->itens[idx].nome, f->itens[idx].idade);
    }
    printf("\n");
}

// A fila pode ser usada no main apos ser inicializada, inserindo pessoas e mostrando o conteudo
int main() {
    Fila f;
    inicializarFila(&f);  // Inicializa a fila
 
    // Insere algumas pessoas na fila
    Pessoa p1 = {"João", 25};
    Pessoa p2 = {"Maria", 30};
    inserir(&f, p1);
    inserir(&f, p2);
 
    mostrarFila(&f);  // Mostra a fila antes da remoção
 
    // Remove uma pessoa da fila
    Pessoa removida;
    remover(&f, &removida);  // Aqui usamos a função de remoção
 
    printf("Pessoa removida: %s, %d\n", removida.nome, removida.idade);
 
    mostrarFila(&f);  // Mostra a fila após a remoção
 
    return 0;
}






