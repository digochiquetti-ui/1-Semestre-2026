#include <stdio.h>
#include <string.h>

int main() {
    char nome[50];
    int idade;
    int i;
    
    printf("Digite seu nome: ");
    fgets(nome, sizeof(nome), stdin);
    nome[strcspn(nome, "\n")] = '\0';
    
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    
    printf("Nome completo: %s\n", nome);
    
    int tamanho = strlen(nome);
    printf("O nome tem %d caracteres. \n", tamanho);
    
    printf("%s", strlen(nome) > 15 ? "Nome grande\n" : "Nome pequeno\n");
    printf("%s", idade >= 18 ? "Maior de idade\n" : "Menor de idade\n");
    printf("A primeira letra do nome é: %c\n", nome[0]);
    
    for(i = 0; i < strlen(nome); i++){
        printf("Posição %d: %c\n", i, nome[i]);
    }
    
    return 0;
   
}
