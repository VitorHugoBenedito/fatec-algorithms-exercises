#include <stdio.h>

int main() {
    float firstNumber, secondNumber;

    printf("Digite o valor do primeiro numero: ");
    scanf("%f", &firstNumber);

    printf("Digite o valor do segundo numero: ");
    scanf("%f", &secondNumber);

    float result = firstNumber - secondNumber;

    printf("Resultado da subtracao: %.2f\n", result);

    return 0;
}