#include <stdio.h>
#include <string.h>

typedef struct{
    int Codigo;
    char Nome_do_Paciente[101];
    float Altura;
    char Sexo;
    float Peso_Atual;
    float Peso_Ideal;
    
} Paciente;

Paciente Pacientes[6];
int resposta = 1;
int i = 0;
int quantidade = 5; 
Paciente p;

void calcularIMC(int m){
    if(Pacientes[m].Sexo == 'M'){
        Pacientes[m].Peso_Ideal = 72.7 * Pacientes[m].Altura - 58;
    }
        
    else if(Pacientes[m].Sexo == 'F'){
        Pacientes[m].Peso_Ideal= 62.1 * Pacientes[m].Altura - 44.7;
    }
}

void exibirMenu(){
    while(resposta != 2){
        printf("\n");
        printf("Quantidade de cadastros que voce possui:  %i \n", quantidade - i);
        printf("\n");
        
        printf("Informe o código do paciente: \n");
        scanf("%i", &Pacientes[i].Codigo);
        
        printf("Informe o nome do paciente: \n");
        scanf(" %100[^\n]", p.Nome_do_Paciente);
        strcpy(Pacientes[i].Nome_do_Paciente, p.Nome_do_Paciente);
        
        printf("Informe a altura do paciente: \n");
        scanf("%f", &Pacientes[i].Altura);
        
        printf("Informe o sexo do paciente: (M/F) \n");
        scanf(" %c", &Pacientes[i].Sexo);
        
        printf("Informe o peso do paciente: \n");
        scanf("%f", &Pacientes[i].Peso_Atual);
        
        if (i < 5){
            printf("Gostaria de continuar cadastrando? 1-Sim / 2-Não");
            scanf("%i", &resposta);
        }
        
        calcularIMC(i);
        i++;
        printf("\n");
        
        if (resposta == 2 || i == 5){
          resposta = 2;
          imprimirCadastros(i);
        } 
        
    }
}

void imprimirCadastros(int m){
    for (int k = 0; k < m; k++){
        printf("Código do Paciente: %i \n", Pacientes[k].Codigo);
        printf("Nome do Paciente: %s \n", Pacientes[k].Nome_do_Paciente);
        printf("Altura do Paciente: %.2f \n", Pacientes[k].Altura);
        printf("Sexo do Paciente: %c \n", Pacientes[k].Sexo);
        printf("Peso do Paciente: %.2f \n", Pacientes[k].Peso_Atual);
        printf("Peso ideal do Paciente: %.2f \n", Pacientes[k].Peso_Ideal);
        printf("\n");
    }
}

int main()
{
    printf("Cadastre até 5 pacientes \n");
    exibirMenu();
}