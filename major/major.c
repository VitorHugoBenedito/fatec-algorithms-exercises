#include <stdio.h>

int main()
{
    float firstValue, secondValue, majorValue;

    printf("Digite o primeiro numero: ");
    scanf("%f", &firstValue);

    printf("Digite o segundo numero: ");
    scanf("%f", &secondValue);

    if (firstValue > secondValue) {
        majorValue = firstValue;
    } else if (firstValue < secondValue) {
        majorValue = secondValue;
    } else {
        printf("Os numeros sao iguais.\n");
        return 0;
    }

    printf("O maior numero e: %.2f\n", majorValue);

    return 0;
}