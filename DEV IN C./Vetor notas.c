#include <stdio.h>

int main() {
    float notas[5];
    float soma = 0;
    
    for(int i=0; i<5; i++){
        printf("Digite sua nota %d: ", i + 1);
        scanf("%f", &notas[i]);
        soma += notas[i];
    }
    float media = soma / 5;
    
    printf("Media: %.2f", media);
    
    
    return 0;
}