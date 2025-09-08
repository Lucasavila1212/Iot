#include <stdio.h>

int main()
{
    int anos; 
    
    printf("Informe sua idade: ");
    scanf("%d", &anos);
    
    if (anos > 0 && anos < 18) {
        printf("Você é menor de idade.");
    } else if (anos >= 18 && anos < 65) {
        printf("Você é adulto.");
    } else if (anos >= 65) {
        printf("Você é idoso.");
    } else {
        printf("Erro! Idade inválida.");
    }
    
    return 0;
}
