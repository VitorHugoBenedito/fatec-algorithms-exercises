#include <stdio.h>

int main() {
    float salary, consumptionKW;

    printf("Digite o salario minimo: ");
    scanf("%f", &salary);

    printf("Digite o consumo em KW: ");
    scanf("%f", &consumptionKW);

    // 1 KW = 1/5 do salário mínimo
    float valueKW = salary / 5;

    float result = consumptionKW * valueKW;

    printf("Valor de cada KW: R$ %.2f\n", valueKW);
    printf("Valor total a pagar: R$ %.2f\n", result);

    return 0;
}