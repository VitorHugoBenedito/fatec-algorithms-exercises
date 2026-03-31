#include <stdio.h>

int main()
{
    float firstValue, secondValue, smallerValue;

    printf("Digite o primeiro numero: ");
    scanf("%f", &firstValue);

    printf("Digite o segundo numero: ");
    scanf("%f", &secondValue);

    if (firstValue < secondValue) {
        smallerValue = firstValue;
    } else  if (firstValue > secondValue) {
        smallerValue = secondValue;
    } else {
        printf("Os numeros sao iguais.\n");
        return 0;
    }

    printf("O menor numero e: %.2f\n", smallerValue);

    return 0;
}