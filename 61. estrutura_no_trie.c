// Estrutura do nó


// Para construir uma Trie, cada nó precisa representar possíveis ramificações para os próximos caracteres. Em geral,
// utilizamos um array de ponteiros (por exemplo, 26 para letras minúsculas de 'a' a 'z') e um indicador booleano que
// mostra se um caminho forma uma palavra completa


#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
 
#define TAMANHO_ALFABETO 26
 
struct NoTrie {
    struct NoTrie* filhos[TAMANHO_ALFABETO];
    bool ehFimDePalavra;
};

// A estrutura reserva espaço para até 26 possíveis filhos em cada nível e um campo ehFimDePalavra, que nos ajuda a 
// reconhecer quando uma sequência de caracteres completa uma palavra


// Criação de um nó


// Ao iniciarmos a Trie, precisaremos de um nó raiz vazio. Cada novo caractere inserido será conectado de 
// modo dinâmico, conforme a palavra for processada.

struct NoTrie* criarNo() { 
    struct NoTrie* novoNo = (struct NoTrie*) malloc(sizeof(struct NoTrie));
    novoNo->ehFimDePalavra = false;
    for (int i = 0; i < TAMANHO_ALFABETO; i++) {
            novoNo->filhos[i] = NULL;
    }

    return novoNo;
}

// A alocação dinâmica permite que o espaço de memória seja utilizado apenas quando necessário. 
// Cada ponteiro inicializado com NULL viabiliza que a árvore cresça sob demanda, economizando espaço.


