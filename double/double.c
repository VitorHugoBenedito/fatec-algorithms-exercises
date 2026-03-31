#include <stdio.h>

int main() {
    int number;

    printf("Digite um numero inteiro: ");
    scanf("%d", &number);

    int result = number * 2;

    printf("O resultado do dobro do numero é: %d\n", result);

    return 0;
}