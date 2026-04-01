#include <stdio.h>

int main() {
    double metros;
    int opcao;

    printf("CONVERSOR DE UNIDADE METRICA\n");
    printf("1 - Metros para Centimetros\n");
    printf("2 - Metros para Milimetros\n");
    printf("3 - Metros para Quilometros\n");

    printf("\nDigite o valor em metros: ");
    scanf("%lf", &metros);

    printf("Escolha a opcao: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            printf("\n%.2f metros = %.2f centimetros\n", metros, metros * 100);
            break;
        case 2:
            printf("\n%.2f metros = %.2f milimetros\n", metros, metros * 1000);
            break;
        case 3:
            printf("\n%.2f metros = %.6f quilometros\n", metros, metros / 1000);
            break;
        default:
            printf("\nOpcao invalida!\n");
    }

    return 0;
}