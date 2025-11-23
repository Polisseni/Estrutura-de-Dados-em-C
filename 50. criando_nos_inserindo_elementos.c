// Criando um nó

// Sempre que quisermos adicionar um novo valor à árvore, precisaremos criar um nó com esse valor. 
// Essa função aloca memória e inicializa os ponteiros como NULL, já que novos nós começam sem filhos

struct No* criarNo(const char* valor) {
    struct No* novo = (struct No*) malloc(sizeof(struct No));
    strcpy(novo->valor, valor);
    novo->esquerda = NULL;
    novo->direita = NULL;
    return novo;
}

// Esse passo certifica que cada valor inserido é um novo bloco na árvore, isolado e pronto para ser conectado a outros nós


// Inserindo elementos na árvore

// O passo agora é inserir os nós seguindo a regra da BST: valores menores vão à esquerda, maiores à direita:

struct No* inserir(struct No* raiz, const char* valor) {
    if (raiz == NULL) 
        return criarNo(valor);
    
        if (strcmp(valor, raiz->valor) < 0)
            raiz->esquerda = inserir(raiz->esquerda, valor);
        else if (strcmp(valor, raiz->valor) > 0)
            raiz->direita = inserir(raiz->direita, valor);
    
        return raiz;
}

// Por último, o processo estudado é recursivo, ou seja, ele percorre a árvore até encontrar uma posição livre 
// para inserir o novo valor. Como cada chamada vai descendo um nível, a árvore cresce de cima para baixo
// Toda vez que um nó for inserido, é considerada a lógica que caracteriza uma BST
// Quando um nó é menor que a raiz atual, ele é alocado à esquerda dela, caso contrário, à direita