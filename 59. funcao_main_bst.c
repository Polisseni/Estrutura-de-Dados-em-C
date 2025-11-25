// Função principal (main)

// Montamos a árvore, imprimimos os valores ordenados e testamos a busca de alguns nomes

int main() {
    struct No* raiz = NULL;
 
    raiz = inserir(raiz, "Pegadas de Lama");
    raiz = inserir(raiz, "Chave perdida");
    raiz = inserir(raiz, "Livro com página faltando");
    raiz = inserir(raiz, "Lençol manchado");
    raiz = inserir(raiz, "Gaveta perdida");
 
    printf("\nElementos em ordem: ");
    emOrdem(raiz);
 
    printf("\nBusca por ‘Lençol manchado’: %s", buscar(raiz, "Lençol manchado") ? "Encontrado" : "Não encontrado");
    printf("\nBusca por ‘Óculos’: %s\n", buscar(raiz, "Óculos") ? "Encontrado" : "Não encontrado");
 
    return 0;
}

// O operador ternário (condição ? ValorSeVerdadeiro: valorSeFalso) é utilizado para exibir “Encontrado” caso a 
// função buscar() retorne verdadeira, indicando que o item foi localizado na árvore. Se retornar falso, o valor 
// exibido será “Não encontrado”. Dica: essa técnica é muito utilizada para simplificar decisões
// lógicas dentro do printf.

// Com isso, temos uma BST funcional, capaz de armazenar, ordenar e buscar strings de maneira eficiente.