#include <stdio.h>

int main() {
    float weigth;

    printf("Digite o peso do chassi em Kg: ");
    scanf("%f", &weigth);

    float grams = weigth * 1000;

    printf("Peso em gramas: %.2f g\n", grams);

    return 0;
}