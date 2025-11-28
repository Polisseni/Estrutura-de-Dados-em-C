// O papel da função hash

// Primeiro, vamos entender que a função hash é o mecanismo que torna a eficiência da chave-valor possível. 
// Ela é responsável por converter uma chave (em geral, uma string, como “Suspeito1” ou “Suspeito2”) em um número 
// inteiro, que indicará a posição (índice) em que o valor será armazenado ou buscado dentro de um vetor interno.

// Esse processo é chamado de mapeamento, e é indispensável que seja feito de maneira eficiente para o bom desempenho 
// da tabela hash. A chave, portanto, não é usada de forma direta, mas transformada por essa função antes de acessar o
//  armazenamento.


// Propriedades de uma boa função hash

// Determinismo:
// A função deve sempre gerar o mesmo valor de hash para a mesma chave. Logo, se "João" for 
// convertido em 35 uma vez, sempre deverá resultar 35.

// Eficiência:
// O cálculo da função hash deve ser rápido, já que ela será usada com frequência durante operações de inserção, busca e remoção.

// Dispersão Uniforme:
// As chaves devem ser distribuídas de forma uniforme ao longo do vetor. Assim, se muitas chaves forem mapeadas para o mesmo 
// índice (colisões), o desempenho da tabela pode se degradar logo.