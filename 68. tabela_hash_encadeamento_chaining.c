// Introdução a tabelas hash com encadeamento

// Quando lidamos com grandes volumes de dados e queremos fazer buscas rápidas, as tabelas hash surgem como uma das
// estruturas mais eficientes. Elas permitem que uma chave — como um nome ou número — seja convertida em um índice 
// de um vetor e usada para localizar um valor com tempo médio de acesso constante (O(1)).

// No entanto, essa eficiência depende do bom tratamento de um problema inevitável: as colisões.


// O que são colisões?

// Quando duas ou mais chaves diferentes são transformadas, pela função hash, no mesmo índice da tabela ocorre uma colisão.
// Como o vetor só pode armazenar um elemento por posição, precisamos de uma maneira de armazenar múltiplos dados na mesma posição.


// Encadeamento

// Resolve colisões utilizando, em cada posição do vetor, uma lista ligada. Assim, quando várias chaves forem direcionadas
// ao mesmo índice, elas são adicionadas como nós dessa lista.

// Vamos entender melhor! Imagine uma caixa de correio com várias cartas dentro. A "caixa" é a posição do vetor, e cada 
// "carta" é um nó da lista com uma chave.

// Essa solução é flexível, simples de implementar e eficiente na prática.