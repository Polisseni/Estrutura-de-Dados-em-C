// --- SUA FUNCAO ---
// Descricao: Recebe o endereco de duas variaveis inteiras e troca os valores entre elas
// Por usar ponteiros (int*), a funcao modifica as variaveis originais que foram passadas para ela
void trocar (int* a, int*b) {
    // 1. Guarda o valor apontado por 'a' em uma variavel temporaria
    // O asterisco (*) e o operador de "desreferencia", que acessa o valor no endereco
    int temp = *a;
    
    // 2. O valor apontado por 'b' e copiado para o local apontado por 'a'
    *a = *b;

    // 3. O valor que guardamos (original de 'a') e copiado para o local apontado por 'b'
    *b = temp;
}