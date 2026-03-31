#include <stdio.h>

int main() {
    float firstNumber, secondNumber, thirdNumber;

    printf("Digite o primeiro numero: ");
    scanf("%f", &firstNumber);

    printf("Digite o segundo numero: ");
    scanf("%f", &secondNumber);

    printf("Digite o terceiro numero: ");
    scanf("%f", &thirdNumber);

    float result = firstNumber * secondNumber * thirdNumber;

    printf("Resultado da multiplicacao: %.2f\n", result);

    return 0;
}