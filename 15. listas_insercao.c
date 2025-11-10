// --- A SUA FUNCAO ---
// Insere um novo noh no inicio da lista
void inserirNoInicio(struct No** inicio, int valor){
    // 1. Criamos nosso 'novo no' alocando memoria para ele
    struct No* novo = (struct No*) malloc(sizeof(struct No));

    // Verificacao para o caso de falha na alocacao da memoria
    if (novo == Null) {
        printf("ERRO! Falha ao alocar memoria!\n");
        return;
    }
    
    // 2. Colocamos o valor dentro dele
    novo->dado = valor;

    // 3. O "proximo" do nosso novo no sera o inicio da lista
    // O ponteiro 'inicio' e um ponteiro para ponteiro, entao 'inicio' nos da o ponteiro para o primeiro no atual  
    novo->proximo = *inicio;

    // 4. Agora, o inicio da lista passa a ser nosso novo no!
    // Modificamos o ponteiro original para que ele aponte para o novo no
    *inicio = novo;
} 
