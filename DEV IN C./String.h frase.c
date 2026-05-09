#include <stdio.h>
#include <string.h>

int main() {
    char frase[100];
    char busca[50];
    
    printf("Digite uma frase: ");
    fgets(frase, sizeof(frase), stdin);
    frase[strcspn(frase, "\n")] = '\0';
    
    printf("Digite o que deseja buscar na frase: ");
    fgets(busca, sizeof(busca), stdin);
    busca[strcspn(busca, "\n")] = '\0';
    
    printf("A frase digitada foi: %s\n", frase);
    printf("A frase buscada foi: %s\n", busca);
    printf("%s", strstr(frase, busca) != NULL ? "Busca concluida\n" : "Busca Incompleta\n");
    printf("A frase tem %d letras\n", strlen(frase));
    printf("O texto procurado tem %d letras\n", strlen(busca));
    printf("%s", strlen(frase) > 30 ? "Frase longa\n" : "Frase curta\n");
    
    
    
    return 0;
   
}
