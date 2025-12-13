#include <stdio.h>
#include <string.h>

typedef struct {
    char placa[10];
    char modelo[30];
    int horaEntrada;
    int minEntrada;
    int horaSaida;
    int minSaida;
    float valor;
} Ticket;

/* Função para calcular o valor */
float calcularValor(int hE, int mE, int hS, int mS) {
    int totalEntrada = hE * 60 + mE;
    int totalSaida   = hS * 60 + mS;
    int tempoMin = totalSaida - totalEntrada;

    if (tempoMin <= 0) {
        return 0.0;
    }

    int horas = tempoMin / 60;
    int resto = tempoMin % 60;

    float valor = horas * 1.0;

    if (resto > 0 && resto <= 30) {
        valor += 0.5;
    } else if (resto > 30) {
        valor += 1.0;
    }

    return valor;
}

int main() {
    Ticket t;

    printf("=== SISTEMA DE ESTACIONAMENTO ===\n\n");

    printf("Placa do veiculo: ");
    fgets(t.placa, sizeof(t.placa), stdin);
    t.placa[strcspn(t.placa, "\n")] = '\0';

    printf("Modelo do veiculo: ");
    fgets(t.modelo, sizeof(t.modelo), stdin);
    t.modelo[strcspn(t.modelo, "\n")] = '\0';

    printf("Hora de entrada (HH MM): ");
    scanf("%d %d", &t.horaEntrada, &t.minEntrada);

    printf("Hora de saida (HH MM): ");
    scanf("%d %d", &t.horaSaida, &t.minSaida);

    t.valor = calcularValor(
        t.horaEntrada,
        t.minEntrada,
        t.horaSaida,
        t.minSaida
    );

    printf("\n=== TICKET ===\n");
    printf("Placa: %s\n", t.placa);
    printf("Modelo: %s\n", t.modelo);
    printf("Entrada: %02d:%02d\n", t.horaEntrada, t.minEntrada);
    printf("Saida: %02d:%02d\n", t.horaSaida, t.minSaida);
    printf("Valor a pagar: R$ %.2f\n", t.valor);

    return 0;
}
