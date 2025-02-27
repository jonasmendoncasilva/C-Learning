#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char frase[101];
    char frase_maiuscula[101];
    char frase_minuscula[101];
    char frase_invertida[101];
    int vogais = 0;
    
    printf("Informe uma String de no maximo 100 caracteres: ");
    printf("\n");
    scanf("%100[^\n]", frase);
    printf("\n");
    
    int tamanho = strlen(frase);

    for(int i = 0; i < tamanho; i++){
       
        frase_minuscula[i] = tolower(frase[i]);
        frase_maiuscula[i] = toupper(frase[i]);
        
        switch(frase_minuscula[i]) {
            
            case 'a':
                vogais++;
            break;
            
            case 'e':
                vogais++;
            break;
            
            case 'i':
                vogais++;
            break;
            
            case 'o':
                vogais++;
            break;
            
            case 'u':
                vogais++;
            break;
        }
       
        frase_invertida[i] = frase[tamanho - i - 1];
    }
    
    printf("Tamanho da String: %i", tamanho);
    printf("\n");    
    printf("A String toda em letras minusculas: %s", frase_minuscula);
    printf("\n");
    printf("A String toda em letras maiusculas: %s", frase_maiuscula);
    printf("\n");
    printf("Quantidade de vogais: %i", vogais);
    printf("\n");
    printf("A String invertida %s", frase_invertida);
    
    
    
	return 0;
}