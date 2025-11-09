//int *a, b;
//b = 10;
//a = (int*)malloc(sizeof(int));  Pedimos um espaço
//*a = 20;
//a = &b;  ERRO! Perdemos a referência do espaço alocado
//free(a);  ERRO! Tentando liberar memória estática, precisa ir para linha 5 so invés da 6


int *a, b;
b = 10;
a = (int*)malloc(sizeof(int)); // Pedimos espaço.
*a = 20;
free(a);
a = &b;