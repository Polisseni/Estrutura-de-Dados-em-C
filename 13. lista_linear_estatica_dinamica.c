// LISTA LINEAR ESTATICA
int numeros[5] = {10, 20, 30, 40, 50};
printf("%d", numeros[2]); // Imprimira o valor '30' na tela


// LISTA LINEAR DINAMICA
// PASSO 1: Alocando a memoria inicial
int* numeros = (*int) malloc(3 * sizeof(int)); 
// "Ei, me arruma um espaco na memoria para 3 numeros do tipo inteiro(int)."

// PASSO 2: Preenchendo a lista
numeros[0] = 10;
numeros[1] = 20;
numeros[2] = 30;

// PASSO 3: Realocando a memoria para expandir a lista
numeros = (int*) realloc(numeros, 5 * sizeof(int));
// "Ei sistema, lembra daquele bloco de memoria para 3 inteiros? Preciso que ele agora tenha espaço para 5 inteiros."
numeros[3] = 40;
numeros[4] = 50;