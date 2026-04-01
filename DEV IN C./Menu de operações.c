#include <stdio.h>

int main() {
	int n, opcao;
	double a, b, resultado;

	printf("Quantas operacoes deseja fazer?:  ");
	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {
		printf("\n=== OPERACAO %d ===\n", i);
		printf("1 - Somar dois numeros\n");
		printf("2 - Subtrair dois numeros\n");
		printf("3 - Multiplicar dois numeros\n");
		printf("Escolha a opcao: ");
		scanf("%d", &opcao);

		printf("Digite dois numeros: ");
		scanf("%lf %lf", &a, &b);

		switch (opcao) {
		case 1:
			resultado = a + b;
			printf("%.2f + %.2f = %.2f\n", a, b, resultado);
			break;
		case 2:
			resultado = a - b;
			printf("%.2f - %.2f = %.2f\n", a, b, resultado);
			break;
		case 3:
			resultado = a * b;
			printf("%.2f x %.2f = %.2f\n", a, b, resultado);
			break;
		default:
			printf("Opcao invalida!\n");
		}
	}

	printf("     Programa encerrado.\n");

	return 0;
}