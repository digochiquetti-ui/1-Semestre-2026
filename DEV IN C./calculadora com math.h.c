#include <stdio.h>
#include <math.h>

int main() {
    double a, b, resultado;
    int opcao;

    printf("CALCULADORA MATH.H\n");
    printf("1 - Soma\n");
    printf("2 - Subtracao\n");
    printf("3 - Multiplicacao\n");
    printf("4 - Divisao\n");
    printf("5 - Potencia\n");
    printf("6 - Raiz Quadrada\n");
    printf("\nEscolha a opcao: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            printf("Digite os dois numeros: ");
            scanf("%lf %lf", &a, &b);
            resultado = a + b;
            printf("%.2f + %.2f = %.2f\n", a, b, resultado);
            break;

        case 2:
            printf("Digite dois numeros: ");
            scanf("%lf %lf", &a, &b);
            resultado = a - b;
            printf("%.2f - %.2f = %.2f\n", a, b, resultado);
            break;

        case 3:
            printf("Digite dois numeros: ");
            scanf("%lf %lf", &a, &b);
            resultado = a * b;
            printf("%.2f x %.2f = %.2f\n", a, b, resultado);
            break;

        case 4:
            printf("Digite dois numeros: ");
            scanf("%lf %lf", &a, &b);
            if (b == 0) {
                printf("Erro: divisao por zero!\n");
            } else {
                resultado = a / b;
                printf("%.2f / %.2f = %.2f\n", a, b, resultado);
            }
            break;

        case 5:
            printf("Digite a base e o expoente: ");
            scanf("%lf %lf", &a, &b);
            resultado = pow(a, b);
            printf("%.2f ^ %.2f = %.2f\n", a, b, resultado);
            break;

        case 6:
            printf("Digite um numero: ");
            scanf("%lf", &a);
            if (a < 0) {
                printf("Erro: nao existe raiz quadrada de numero negativo\n");
            } else {
                resultado = sqrt(a);
                printf("Raiz quadrada de %.2f = %.2f\n", a, resultado);
            }
            break;

        default:
            printf("Erro: opcao invalida!\n");
    }

    return 0;
}