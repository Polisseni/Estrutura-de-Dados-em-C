// Remoção de um nó com um filho


// Se for um único filho, a exclusão exige que o ponteiro do pai do nó removido passe a apontar para o filho 
// existente, que pode estar à esquerda ou à direita. Isso permite que os elementos inferiores continuem acessíveis e 
// preserva a ordenação da árvore binária de busca.
// O nó retirado é, então, liberado da memória sem quebrar a hierarquia da árvore