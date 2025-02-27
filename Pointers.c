#include <stdio.h>

 //Definição da Struct Aluno

typedef struct{
    char nome[50];
    int matricula;
    float nota1, nota2;
    
} Aluno;

//Protótipo das funções

Aluno cadastrarAluno();
void imprimirAluno(Aluno aluno);
float calcularMedia(Aluno aluno);

//Função main
// Cria duas Struct Aluno, atribui valores a essas e imprime para o usuário

int main()
{
    Aluno aluno1, aluno2;
    
    aluno1 = cadastrarAluno();
    aluno2 = cadastrarAluno();
    
    imprimirAluno(aluno1);
    imprimirAluno(aluno2);
    
    return 0;
}

//Método cadastra o Aluno por meio da inserção de dados e retorna um Struct Aluno

Aluno cadastrarAluno(){
    
    Aluno aluno;
    
    printf("\n");
    printf("Insira o nome do Aluno: \n");
    scanf("%s", &aluno.nome);
    getchar();
    
    printf("Insira o n° da matricula: \n");
    scanf("%d", &aluno.matricula);
    
    printf("Insira a primeira nota: \n");
    scanf("%f", &aluno.nota1);
    
    printf("Insira a segunda nota: \n");
    scanf("%f", &aluno.nota2);
    
    return aluno;
}

//Método imprimi os dados de um Struct Aluno e exibi a média calculada no Método
//calcularMedia

void imprimirAluno(Aluno aluno){
    
    printf("\n");
    printf("Nome do aluno: %s \n", aluno.nome);
    printf("Matricula: %d \n", aluno.matricula);
    printf("Nota 1: %f \n", aluno.nota1);
    printf("Nota 2: %f \n", aluno.nota2);
    printf("Media: %f \n", calcularMedia(aluno));
}

//Método calcula a media do aluno e retorna o resultado como float
float calcularMedia(Aluno aluno){
    
    return (aluno.nota1 + aluno.nota2) / 2;
}