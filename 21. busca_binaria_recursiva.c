// --- A SUA FUNCAO ---
// Descricao: Busca por um 'valor' em um 'vetor' ORDENADO definida por 'inicio' e 'fim'
// Pre-requisito: o 'vetor' DEVE estar em ordem CRESCENTE
// Retorno: O indice do valor, caso encontrado
// -1 se o valor nao estiver no vetor
int buscaBinariaRecursiva(int vetor[], int inicio, int fim, int valor) {
    // CASO BASE: Se a area de busca se torna invalida (inicio > fim), o elemento nao existe na lista, o trabalho de recursao para aqui 
    if (inicio > fim) {
        return -1;
    }

        // Calcula a posicao do meio
        // Usar 'inicio + (fim - inicio) / 2' e mais seguro contra overflow em vetores extremamente grandes 
        int meio = inicio + (fim - inicio) / 2;

        //  Se o valor estiver exatamente no meio, encontramos!
        // Este e outro CASO BASE (de sucesso)
        if (vetor[meio] == valor) {
            return meio; // Retorna o indice onde o valor foi encontrado
        }
        // PASSO RECURSIVO(DELEGACAO):
        // Se o valor no meio for menor que o buscado, significa que nosso alvo so pode estar na metade da direita (maior)
        else if (vetor[meio] < valor) {
            return buscaBinariaRecursiva(vetor, meio + 1, fim, valor);
        }
        // Caso contrario, delegamos a busca para a metade da esquerda
        else {
            return buscaBinariaRecursiva(vetor, meio - 1, fim, valor);
        }
    }