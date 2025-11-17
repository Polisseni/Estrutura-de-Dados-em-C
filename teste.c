struct Tarefa {
    char descriçao[100];
    int prioridade;
    struct Tarefa* proxima; // o 'elo' para a próxima tarefa
};

// primeiro programa em C