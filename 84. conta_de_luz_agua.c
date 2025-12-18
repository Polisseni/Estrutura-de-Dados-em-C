// 💡 Regras adotadas no programa

// Energia elétrica: R$ 0,75 por kWh
// Água: R$ 3,50 por m³

#include <stdio.h>

int main() {
    float consumoLuz, consumoAgua;
    float valorLuz, valorAgua, total;

    // Tarifas
    const float TARIFA_LUZ = 0.75;   // R$ por kWh
    const float TARIFA_AGUA = 3.50;  // R$ por m³

    // Entrada de dados
    printf("Digite o consumo de energia (kWh): ");
    scanf("%f", &consumoLuz);

    printf("Digite o consumo de agua (m³): ");
    scanf("%f", &consumoAgua);

    // Cálculos
    valorLuz = consumoLuz * TARIFA_LUZ;
    valorAgua = consumoAgua * TARIFA_AGUA;
    total = valorLuz + valorAgua;

    // Saída de dados
    printf("\n===== CONTA DA RESIDENCIA =====\n");
    printf("Conta de Luz:  R$ %.2f\n", valorLuz);
    printf("Conta de Agua: R$ %.2f\n", valorAgua);
    printf("------------------------------\n");
    printf("Total a pagar: R$ %.2f\n", total);

    return 0;
}
