#include <stdio.h>

int main() {
    float firstNumber, secondNumber;

    printf("Digite o valor do primeiro número: ");
    scanf("%f", &firstNumber);

    printf("Digite o valor do segundo número: ");
    scanf("%f", &secondNumber);

    if (secondNumber != 0) {
        float result = firstNumber / secondNumber;
        printf("O resultado da divisão é: %f\n", result);
    } else {
        printf("Erro: divisão por zero não é permitida.\n");
    }

    return 0;
}