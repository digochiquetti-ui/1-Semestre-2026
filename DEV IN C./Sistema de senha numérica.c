#include <stdio.h>

int main() {
    int senha, tentativas = 0;
    int acertos = 0;

    while (tentativas < 3 && acertos == 0) {
        printf("Digite a senha: ");
        scanf("%d", &senha);
        tentativas++;

        if (senha == 1234) {
            acertos = 1;
            printf("Acesso permitido!\n");
        } else {
            printf("Senha incorreta!\n");

            if (tentativas < 3) {
                printf("Tentativas restantes: %d\n", 3 - tentativas);
            }
        }
    }

    if (acertos == 0) {
        printf("Conta bloqueada!\n");
    }

    return 0;
}