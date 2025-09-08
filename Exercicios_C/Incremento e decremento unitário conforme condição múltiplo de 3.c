#include <stdio.h>

int main()
{
    int valor; 
    printf("Informe um número: ");
    scanf("%d", &valor);
    
    if (valor % 3 == 0) {
        valor++; 
        printf("O número digitado é múltiplo de 3.\n");
        printf("Após incremento: %d\n", valor);
    } else {
        valor--;  
        printf("O número digitado não é múltiplo de 3.\n");
        printf("Após decremento: %d\n", valor);
    }
    
    return 0;
}
