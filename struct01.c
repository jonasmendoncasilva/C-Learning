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

int main()
{
    Paciente p;
    
    printf("Cadastre até 5 pacientes \n");
    
    while(resposta != 2){
        printf("\n");
        printf("Quantidade de cadastros que você possui:  %i \n", quantidade - i);
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
        
        printf("Gostaria de continuar cadastrando? 1-Sim / 2-Não");
        scanf("%i", &resposta);
        
        if(Pacientes[i].Sexo == 'M'){
            Pacientes[i].Peso_Ideal = 72.7 * Pacientes[i].Altura - 58;
        }
        
        else if(Pacientes[i].Sexo == 'F'){
            Pacientes[i].Peso_Ideal= 62.1 * Pacientes[i].Altura - 44.7;
        }
        
        if (resposta == 2){
          resposta = 2;  
        } 
        
        i++;
        
        printf("\n");
    }
    
    for (int k = 0; k < i; k++){
        printf("Código do Paciente: %i \n", Pacientes[k].Codigo);
        printf("Nome do Paciente: %s \n", Pacientes[k].Nome_do_Paciente);
        printf("Altura do Paciente: %.2f \n", Pacientes[k].Altura);
        printf("Sexo do Paciente: %c \n", Pacientes[k].Sexo);
        printf("Peso do Paciente: %.2f \n", Pacientes[k].Peso_Atual);
        printf("Peso ideal do Paciente: %.2f \n", Pacientes[k].Peso_Ideal);
        printf("\n");
    }



}