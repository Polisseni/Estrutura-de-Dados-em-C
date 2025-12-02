// Introdução a tabelas de encadeamento aberto

// Uma tabela hash é uma estrutura de dados que permite associar chaves a valores de forma muito eficiente, 
// com operações de inserção, busca e remoção com tempo médio constante (O(1)).

// Mas como garantir eficiência quando ocorrem colisões? Uma abordagem alternativa ao encadeamento (listas ligadas) é o
// endereçamento aberto, que mantém todos os dados dentro do próprio vetor da tabela, sem usar listas auxiliares.


// O que é endereçamento aberto?

// Quando duas chaves produzem o mesmo índice (colisão), em vez de criar listas, a estrutura procura outra posição livre no 
// vetor seguindo um padrão de busca (linear, quadrática, duplo hashing etc.). Usaremos aqui a sondagem linear 
// (ou linear probing): se a posição i estiver ocupada, ela tenta i+1, depois i+2, e assim por diante, até encontrar 
// uma posição livre.