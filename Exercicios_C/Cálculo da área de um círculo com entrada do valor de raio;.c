#include <stdio.h>

#define PI 3.14

int main()
{
    float r, resultado; 
    
    printf("Digite o raio do círculo: ");
    scanf("%f", &r);
    
    resultado = (r * r) * PI;
    
    printf("A área do círculo é: %.2fcm²", resultado);
    return 0;
}