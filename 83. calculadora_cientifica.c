#include <stdio.h>
#include <math.h>

#define PI 3.141592653589793

int main() {
    int opcao;
    double a, b, resultado;

    do {
        printf("\n===== CALCULADORA CIENTÍFICA =====\n");
        printf("1  - Soma\n");
        printf("2  - Subtracao\n");
        printf("3  - Multiplicacao\n");
        printf("4  - Divisao\n");
        printf("5  - Raiz Quadrada\n");
        printf("6  - Potencia (x^y)\n");
        printf("7  - Logaritmo (base 10)\n");
        printf("8  - Logaritmo Natural (ln)\n");
        printf("9  - Seno (graus)\n");
        printf("10 - Cosseno (graus)\n");
        printf("11 - Tangente (graus)\n");
        printf("0  - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Digite dois numeros: ");
                scanf("%lf %lf", &a, &b);
                resultado = a + b;
                printf("Resultado: %.5lf\n", resultado);
                break;

            case 2:
                printf("Digite dois numeros: ");
                scanf("%lf %lf", &a, &b);
                resultado = a - b;
                printf("Resultado: %.5lf\n", resultado);
                break;

            case 3:
                printf("Digite dois numeros: ");
                scanf("%lf %lf", &a, &b);
                resultado = a * b;
                printf("Resultado: %.5lf\n", resultado);
                break;

            case 4:
                printf("Digite dois numeros: ");
                scanf("%lf %lf", &a, &b);
                if (b == 0) {
                    printf("Erro: divisao por zero!\n");
                } else {
                    resultado = a / b;
                    printf("Resultado: %.5lf\n", resultado);
                }
                break;

            case 5:
                printf("Digite um numero: ");
                scanf("%lf", &a);
                if (a < 0) {
                    printf("Erro: raiz de numero negativo!\n");
                } else {
                    resultado = sqrt(a);
                    printf("Resultado: %.5lf\n", resultado);
                }
                break;

            case 6:
                printf("Digite a base e o expoente: ");
                scanf("%lf %lf", &a, &b);
                resultado = pow(a, b);
                printf("Resultado: %.5lf\n", resultado);
                break;

            case 7:
                printf("Digite um numero: ");
                scanf("%lf", &a);
                if (a <= 0) {
                    printf("Erro: logaritmo indefinido!\n");
                } else {
                    resultado = log10(a);
                    printf("Resultado: %.5lf\n", resultado);
                }
                break;

            case 8:
                printf("Digite um numero: ");
                scanf("%lf", &a);
                if (a <= 0) {
                    printf("Erro: logaritmo indefinido!\n");
                } else {
                    resultado = log(a);
                    printf("Resultado: %.5lf\n", resultado);
                }
                break;

            case 9:
                printf("Digite o angulo em graus: ");
                scanf("%lf", &a);
                resultado = sin(a * PI / 180);
                printf("Resultado: %.5lf\n", resultado);
                break;

            case 10:
                printf("Digite o angulo em graus: ");
                scanf("%lf", &a);
                resultado = cos(a * PI / 180);
                printf("Resultado: %.5lf\n", resultado);
                break;

            case 11:
                printf("Digite o angulo em graus: ");
                scanf("%lf", &a);
                resultado = tan(a * PI / 180);
                printf("Resultado: %.5lf\n", resultado);
                break;

            case 0:
                printf("Encerrando a calculadora...\n");
                break;

            default:
                printf("Opcao invalida!\n");
        }

    } while (opcao != 0);

    return 0;
}
