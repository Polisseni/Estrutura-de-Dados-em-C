// =====================================================================================
// PRÁTICA: SISTEMA DE BIBLIOTECA - PARTE 2
// 
// OBJETIVO DESTA PARTE:
// Adicionar a funcionalidade de empréstimo e introduzir alocação dinâmica.
// - Os arrays de livros e empréstimos são alocados com malloc/calloc.
// - Nova struct para Empréstimo.
// - Liberação de memória com free.
//======================================================================================

#include <stdio.h>
#include <stdlib.h>
#include <string.h> // Para strcspn()

// --- Constantes Globais ---
#define MAX_LIVROS 50
#define MAX_EMPRESTIMOS 100 // Definimos uma capacidade para empréstimos.
#define TAM_STRING 100

// --- Definição da Estrutura (Struct) ---
// Struct Livro agora tem um campo 'disponível' para controlar o status.
struct Livro {
    char nome [TAM_STRING];
    char autor [TAM_STRING];
    char editora [TAM_STRING];
    int ediçao;
    int disponivel; // 1 para sim, 0 para não.
};

//Nova struct para armazenar informações do empréstimo.
struct Emprestimo {
    int indiceLivro; // Para saber qual livro do array 'biblioteca' foi emprestado.
    char nomeUsuario[TAM_STRING];
};

// --- Função para limpar o buffer de entrada ---
void limparBufferEntrada() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
};

// --- Função Principal (main) ---
int main () {
    // 1 - ALOCAÇÃO DINÂMICA DE MEMÓRIA
    //Agora, em vez de arrays estáticos, usamos ponteiros.
    struct Livro *biblioteca;
    struct Emprestimo *emprestimos

    // Usamos calloc para o array de livros. calloc(num_elementos, tamanho_de_cada_elemento)
    // Vantagem: inicializa toda a memória com zeros. Isso significa que 'disponível' já começo com 0.
    biblioteca = (struct Livro*) calloc(MAX_LIVROS, sizeof(struct Livro));
    
    // Usamos malloc para o array empréstimos. malloc(tamanho_total_em_bytes)
    emprestimos = (struct Emprestimo*) malloc(MAX_EMPRESTIMOS * sizeof(struct Livro));

    // VERIFICAÇÃO: é crucial verificar se a alocação da memória deu certo.
    if (biblioteca == NULL || emprestimos == NULL) {
        printf("Erro: falha na alocação de memória\n");
        return 1; // Retorna 1 para indicar um erro.
    }

    int totalLivros = 0;
    int totalEmprestimos = 0;
    int opcao;


    // --- Laço principal do Menu ---
    do {

        // Exibe o Menu de Opções.
        printf("==================================\n");
        printf("      BIBLIOTECA - PARTE 1\n");
        printf("==================================\n");
        printf("1 - Cadastrar novo livro\n");
        printf("2 - Listar todos os livros\n");
        printf("3 - Realizar empréstimo\n");
        printf("4 - Listar empréstimos\n");
        printf("0 - Sair\n");
        printf("----------------------------------\n");
        printf("Escolha uma Opçao: ");
        // Lê a opção do usuário.
        scanf("%d", &opçao);
        limparBufferEntrada(); // Limpa o '\n' deixado pelo scanf.

        // --- Processamento da Opção ---
        switch (opçao) {
            case 1: // CADASTRO DE LIVRO
                printf("--- Cadastro de Novo Livro ---\n\n");

                if (totalivros < MAX_LIVROS) {
                    printf("Digite o nome do livro: ");
                    fgets(biblioteca[totalivros].nome, TAM_STRING, stdin);

                    printf("Digite o nome do autor: ");
                    fgets(biblioteca[totalivros].autor, TAM_STRING, stdin);

                    printf("Digite a editora: ");
                    fgets(biblioteca[totalivros].editora, TAM_STRING, stdin);

                    biblioteca[totalivros].nome[strcspn(biblioteca[totalivros].nome, "\n")] = '\0';
                    biblioteca[totalivros].autor[strcspn(biblioteca[totalivros].autor, "\n")] = '\0';
                    biblioteca[totalivros].editora[strcspn(biblioteca[totalivros].editora, "\n")] = '\0';

                    printf("Digite o número da edição: ");
                    scanf("%d", &biblioteca[totalivros].ediçao);
                    limparBufferEntrada();

                    totalivros++;
                    // totalivros += 1

                    printf("\nLivro cadastrado com sucesso!");
                } else {
                    printf("Biblioteca cheia! Não é possível cadastrar mais Livros!\n");
                }
                

                printf("Pressione ENTER para continuar...");
                getchar(); // Pausa para o usuário ler a mensagem antes de voltar ao MENU.
                break;

            case 2: // LISTAGEM DE LIVROS
                printf("--- Lista de Livros Cadastrados ---\n\n");

                if (totalivros == 0) {
                    printf("Nenhum livro cadastrado ainda.\n");
                } else {
                    for(int i = 0; i < totalivros; i++) {
                        printf("------------------------------------\n");
                        printf("LIVRO %d\n", i + 1);
                        printf("Nome: %s\n", biblioteca[i].nome);
                        printf("Autor: %s\n", biblioteca[i].autor);
                        printf("Editora: %s\n", biblioteca[i].editora);
                        printf("Edição: %d\n", biblioteca[i].ediçao);
                    }
                    printf("------------------------------------\n");
                }   

                // A pausa é crucial para que o usuário veja a lista antes
                // Do próximo loop limpar a tela
                printf("\nPressione Enter para continuar...");
                getchar();
                break;

            case 3: // REALIZAR EMPRÉSTIMO
                printf("----- Realizar Empréstimo -----\n\n");

                if(totalEmprestimos >= MAX_EMPRESTIMOS) {
                    printf("Limite de empréstimos atingido!\n");
                } else {
                    printf("Livros disponíveis:\n");
                    int disponiveis = 0;
                    for(int i = 0; i < totalLivros; i++) {
                        if (biblioteca[i].disponivel) {
                            printf("%d - %s\n", i + 1, biblioteca[i].nome);
                            disponiveis ++;
                        }
                    }

                    if(disponiveis == 0) {
                        printf("Nenhum livro disponível para empréstimo.\n");
                    } else {
                        printf("\nDigite o número do livro que deseja emprestar: ");
                        int numLivro;
                        scanf("%d", &numLivro);
                        limparBufferEntrada();

                        int indice = numLivro - 1; // Converte para o índice do array (0 a N-1).
                        
                        // Validação da esolha do usuário.
                        if (indice >= 0 && indice < totalLivros && biblioteca[indice]. disponivel) {
                            printf("Digite o nome do usuário que esta pegando o livro: ");
                            fgets(emprestimos[totalEmprestimos].nomeUsuario, TAM_STRING, stdin);
                            emprestimos[totalEmprestimos].nomeUsuario[strcspn(emprestimos[totalEmprestimos])];

                            // Registra o empréstimo
                            emprestimos[totalEmprestimos].indiceLivro = indice;

                            // Atualiza o status do Livro para indisponível
                            biblioteca[indice].disponivel = 0;

                            totalEmprestimos++;
                            printf("Empréstimo realizado com sucesso!\n");
                        } else {
                            printf("\nNúmero de livro inválido ou livro indisponível.\n");
                        }
                    } 
                }
                printf("\nPressione Enter para continuar...");
                getchar();
                break;
                
            case 4: // LISTAR EMPRÉSTIMOS
                printf("--- Lista de Empréstimos ---\n\n");
                if(totalEmprestimos == 0) {
                    printf("Nenhum empréstimo realizado\n");
                } else {
                    for (int i = 0; i < totalEmprestimos; i++) {
                        // Usa o índice armazenado no empréstimo para buscar o nome do livro.
                        int indiceLivro = emprestimos[i].indiceLivro;
                        printf("------------------------------------\n");
                        printf("EMPRÉSTIMO %d\n", i + 1);
                        printf("Livro: %s\n", biblioteca[indiceLivro].nome);
                        printf("Usuário: %s\n", emprestimos[i].nomeUsuario);
                    }
                    printf("------------------------------------\n");
                }
                printf("\nPressione Enter para continuar...");
                getchar();
                break;

            case 0: // SAIR
                printf("Saindo do SISTEMA...\n");
                break;

            default: // OPÇÃO INVÁLIDA
                printf("\nOpção inválida! Tente novamente.\n");
                printf("\nPressione ENTER para continuar...");
                getchar();
                break;
        }
    } while (opçao != 0);

    // 2. LIBERAÇÃO DA MEMÓRIA
    // Antes de terminar, é ESSENCIAL liberar a memória que foi alocada dinâmicamente
    // Isso evita "memory leaks" ou vazamento de memória.
    free(biblioteca);
    free(emprestimos);

    printf("Memória liberadas com sucesso!\n");

    return 0; // FIM DO PROGRAMA
}