// Altura da árvore

// É o maior número de arestas entre a raiz e uma folha. Em termos práticos, ela define a profundidade máxima da 
// estrutura, e está relacionada ao desempenho de operações como busca.

int altura(struct No* raiz) {
    if (raiz == NULL) 
        return 0;
    int alt_esq = altura(raiz->esquerda);
    int alt_dir = altura(raiz->direita);
    return 1 + (alt_esq > alt_dir ? alt_esq : alt_dir);
}

// Como o código funciona:
// Se o nó for NULL, a altura é 0, significando que a árvore está vazia ou que chegamos ao fim da árvore.
// Calculamos a altura da subárvore esquerda e direita com chamada recursiva.
// Comparamos alt_esq e alt_dir, que são as alturas das subárvores esquerda e direita.
// Usamos o operador ternário (condição ? valor_se_verdadeiro : valor_se_falso) para escolher a maior altura entre as duas.
// Somamos 1 ao resultado, representando o nível atual da árvore (ou seja, o próprio nó).
// Retornamos a altura da árvore, que é 1 + a maior altura entre as subárvores.



// Identificar a altura de uma árvore é importante, pois afeta o tempo de execução das operações. Assim, 
// uma árvore mais alta pode indicar desbalanceamento, tornando buscas e acessos mais lentos.


