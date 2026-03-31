#include <stdio.h>

int main() {
    int numero;
    int contadorPositivo = 0;
    
    printf ("Contador de numeros positivos\n");
    printf("Digite 0 para terminar o programa\n\n");
    
    do {
        printf("Digite um numero inteiro: ");
        scanf("%d", &numero);
        
        if (numero > 0){
            contadorPositivo++;
            }
    } while (numero != 0);
    printf("Quantidade de numeros positivos: %d\n", contadorPositivo);
    
    return 0 ;
}