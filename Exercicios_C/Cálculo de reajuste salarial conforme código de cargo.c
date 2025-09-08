#include <stdio.h>

int main()
{
    int idCargo; 
    float salarioBase, aumento, salarioCorrigido;
    
    printf("Digite o código do cargo: ");
    scanf("%d", &idCargo);
    
    printf("Informe o salário atual: ");
    scanf("%f", &salarioBase);
    
    switch (idCargo) {
        case 1:
            aumento = salarioBase * 0.07;
            salarioCorrigido = salarioBase + aumento;
            printf("Cargo: Auxiliar de escritório\n");
            break;
        case 2:
            aumento = salarioBase * 0.09;
            salarioCorrigido = salarioBase + aumento;
            printf("Cargo: Secretário(a)\n");
            break;
        case 3:
            aumento = salarioBase * 0.05;
            salarioCorrigido = salarioBase + aumento;
            printf("Cargo: Cozinheiro(a)\n");
            break;
        case 4:
            aumento = salarioBase * 0.12;
            salarioCorrigido = salarioBase + aumento;
            printf("Cargo: Entregador\n");
            break;
        default:
            printf("Código inválido!\n");
            return 0;
    }
    
    printf("Reajuste: R$%.2f\n", aumento);
    printf("Novo salário: R$%.2f\n", salarioCorrigido);

    return 0;
}
