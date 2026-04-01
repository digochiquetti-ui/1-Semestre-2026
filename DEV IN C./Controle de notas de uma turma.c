#include <stdio.h>

int main() {
    int n, aprovados = 0, reprovados = 0;
    float nota, soma = 0;

    printf("Quantos alunos existem na turma?:  ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        printf("Digite a nota do aluno %d: ", i);
        scanf("%f", &nota);

        while (nota < 0 || nota > 10) {
            printf("Digite o valor real (entre 0 e 10): ");
            scanf("%f", &nota);
        }

        soma += nota;

        if (nota >= 6) {
            aprovados++;
        } else {
            reprovados++;
        }
    }

    printf("       RESULTADO DA TURMA\n");
    printf("Media da turma:        %.2f\n", soma / n);
    printf("Alunos aprovados:      %d\n", aprovados);
    printf("Alunos reprovados:     %d\n", reprovados);

    return 0;
}