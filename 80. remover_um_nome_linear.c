// Remover um nome

// Para retirar, procuramos pelo nome e marcamos a posição como removida (-1):

void remover(const char* nome) {
    int pos = buscar(nome);
    if (pos == -1) {
        printf("'%s' não encontrado.\n", nome);
        return;
    }
 
    tabela_hash[pos].ocupado = -1;
    printf("'%s' removido da tabela.\n", nome);
}

// Por que marcar como removido?

// Se colocarmos como 0 (vazio), a busca futura pode terminar cedo demais, achando que o item nunca esteve ali
// Usar -1 permite manter o ciclo de busca funcionando como o esperado