#include <stdio.h>

int main() {
    float firstNumber, secondNumber;

    printf("Digite a primeira nota: ");
    scanf("%f", &firstNumber);

    printf("Digite a segunda nota: ");
    scanf("%f", &secondNumber);

    float media = (firstNumber + secondNumber) / 2;

    printf("O resultado da média é: %.2f\n", media);

    if (media >= 7) {
        printf("Aprovado\n");
    } else {
        // 5. Caso contrário
        printf("Reprovado\n");
    }

    return 0;
}