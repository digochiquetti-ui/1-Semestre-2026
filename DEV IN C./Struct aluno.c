#include <stdio.h>
#include <string.h>
struct aluno {
    char nome[50];
    int idade;
    float nota;
};
int main() {
    struct aluno alunos[3];
    int i;
    
    for(i = 0; i < 3; i++){
        printf("Digite o nome do aluno %d: ", i + 1);
        fgets(alunos[i].nome,sizeof(alunos[i].nome), stdin);
        alunos[i].nome[strcspn(alunos[i].nome, "\n")] = '\0';
        
        printf("Digite a idade do aluno %d: ", i + 1);
        scanf("%d", &alunos[i].idade);
        
        printf("Digite a nota final do aluno %d: ", i + 1);
        scanf("%f", &alunos[i].nota);
        
        getchar();
    }
    
    for(i = 0; i < 3; i++){
        printf("\nAluno %d", i + 1);
        printf("Nome: %s\n", alunos[i].nome);
        printf("Idade: %d\n", alunos[i].idade);
        printf("Nota: %2.f\n", alunos[i].nota);
        if(alunos[i].nota >= 7){
            printf("Aprovado");
        }else if(alunos[i].nota >=4){
            printf("Recuperação\n");
        }else{
            printf("Reprovado");
        }
        
    }
    
    
    
    return 0;
}