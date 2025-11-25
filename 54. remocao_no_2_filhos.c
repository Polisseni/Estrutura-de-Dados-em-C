// Remoção de nó com dois filhos

// Em uma árvore binária de busca, a retirada de um nó com dois filhos exige 
// substituição cuidadosa para manter a ordenação da estrutura. Existem duas abordagens corretas e equivalentes:

// Usar o sucessor
// Localizar o menor valor da subárvore direita do nó a ser removido. 
// Esse valor é o primeiro maior do que o valor atual. Após copiar esse valor para o nó original,
// remova o nó que continha esse sucessor na subárvore.


// Usar o antecessor
// Identificar o maior valor da subárvore esquerda do nó a ser removido. Esse valor é o último menor 
// do que o valor atual. Assim como no caso anterior, ele é copiado para o nó original, que é, então, removido.



// Nesse ponto temos algo importante a observar:
// Ambas as alternativas mantêm a propriedade fundamental da árvore binária de busca, isto é, todos os valores 
// à esquerda de um nó são menores que ele, e todos à direita são maiores. A escolhe entre sucessor ou 
// antecessor fica a critério da implementação.


// Em seguida, verificamos se a árvore está vazia. Se sim, ou se a chamada recursiva chegou a um nó inexistente, retorna NULL.
if (raiz == NULL) 
    return NULL;


// Depois, navegamos até o nó com o valor a ser removido. Comparando a string valor com o conteúdo do nó atual, 
// se for menor, o valor vai para a subárvore esquerda; se for maior, para a direita. A busca é feita de forma 
// recursiva até encontrar o valor exato.
if (strcmp(valor, raiz->valor) < 0) {
    raiz->esquerda = remover(raiz->esquerda, valor);
} else if (strcmp(valor, raiz->valor) > 0) {
    raiz->direita = remover(raiz->direita, valor);
}


// Se não for menor, nem maior, achamos nosso valor, entrando em:
else {
    







