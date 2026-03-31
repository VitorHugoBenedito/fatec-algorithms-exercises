#include <stdio.h>

int main() {
    float firstNumber, secondNumber, thirdNumber;

    printf("Digite a primeira nota: ");
    scanf("%f", &firstNumber);

    printf("Digite a segunda nota: ");
    scanf("%f", &secondNumber);

    printf("Digite a terceira nota: ");
    scanf("%f", &thirdNumber);

    float media = (firstNumber + secondNumber + thirdNumber) / 3;

    printf("Media: %.2f\n", media);

    return 0;
}