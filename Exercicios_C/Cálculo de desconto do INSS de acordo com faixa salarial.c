#include <stdio.h>

int main()
{
    float renda, liquido;
    printf("Informe seu salário: ");
    scanf("%f", &renda);
    
    if (renda > 0 && renda <= 600) {
        printf("Isento de INSS. Salário final: %.2f", renda);
    } else if (renda > 600 && renda <= 1200) {
        liquido = renda - (renda * 0.20);
        printf("Desconto de 20%% do INSS. Salário final: %.2f", liquido);
    } else if (renda > 1200 && renda <= 2000) {
        liquido = renda - (renda * 0.25);
        printf("Desconto de 25%% do INSS. Salário final: %.2f", liquido);
    } else if (renda > 2000) {
        liquido = renda - (renda * 0.30);
        printf("Desconto de 30%% do INSS. Salário final: %.2f", liquido);
    } else {
        printf("Valor inválido.");
    }

    return 0;
}
