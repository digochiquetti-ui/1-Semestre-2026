#include <stdio.h>

int main() {
    float temperatura[6];
    float maior = 0, menor;
    int mais30;
    
    for (int i=0; i<6; i++){
    printf("Digite a temperatura: ");
    scanf("%f", &temperatura[i]);
    }
    
    maior = temperatura[0];
    menor = temperatura[0];
    for (int i=1; i<6; i++){
        if (temperatura[i] > maior) maior=temperatura[i];
        if (temperatura[i] < menor) menor=temperatura[i];
        if (temperatura[i] > 30) mais30++;
        
    }
    for (int i=0; i<6; i++){
        printf("\nTemperaturas:%.2f\n", temperatura[i]);
    }
    printf("Maior temperatura: %.2f\n", temperatura);
    printf("Menor temperatura: %.2f\n", temperatura);
    printf("Quantidade de temperatura acima de 30: %d\n", mais30);
    return 0;
}