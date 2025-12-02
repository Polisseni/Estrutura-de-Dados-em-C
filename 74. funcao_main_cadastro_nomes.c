// Função main – cadastro de nomes

// Agora, vamos usar essas funções em um miniprograma que cadastra e manipula nomes

int main() {
    inserir("Ana");
    inserir("Bruno");
    inserir("Carlos");
    inserir("Amanda"); // Pode colidir com "Ana"
 
    printf("Buscando 'Bruno': %s\n", buscar("Bruno") ? "Encontrado" : "Não encontrado");
    printf("Buscando 'João': %s\n", buscar("João") ? "Encontrado" : "Não encontrado");
 
    remover("Carlos");
    remover("João");
 
    return 0;
}


// O que acontece aqui:

// "Ana" e "Amanda" podem acabar no mesmo índice — e o encadeamento resolve isso
// "Carlos" será removido com sucesso
// Ao tentar remover "João", a função nos informa que ele não foi encontrado

// A tabela hash com encadeamento é uma estrutura robusta para situações em que precisamos armazenar dados associados
// a uma chave, com acesso e manipulação rápidos. Sua implementação com listas ligadas torna o sistema flexível 
// e resistente a colisões, que são comuns em qualquer função hash.

// Tal modelo é usado em cadastros, dicionários, catálogos, banco de dados e sistemas de login, entre muitos outros 
// contextos reais. Ao entender sua lógica, você amplia sua capacidade de desenvolver sistemas eficientes e escaláveis.