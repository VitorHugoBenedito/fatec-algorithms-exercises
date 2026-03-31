#include <stdio.h>

int main() {
    float price;

    printf("Digite o preco do produto: ");
    scanf("%f", &price);

    float value = price * 0.90;

    printf("Valor final com desconto é: R$ %.2f\n", value);

    return 0;
}