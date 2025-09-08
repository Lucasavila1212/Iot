#include <stdio.h>

int main()
{
    float medida; 
    
    printf("Digite uma medida em metros: ");
    scanf("%f", &medida);
    
    float emCentimetros = medida * 100;
    float emDecimetros  = medida * 10;
    float emMilimetros  = medida * 1000;
    
    printf("Decímetros: %.2f\n", emDecimetros);
    printf("Centímetros: %.2f\n", emCentimetros);
    printf("Milímetros: %.2f\n", emMilimetros);

    return 0;
}
