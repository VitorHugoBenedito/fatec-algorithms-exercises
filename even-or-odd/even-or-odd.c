#include <stdio.h>

int main()
{
    int number;

    printf("Digite um numero inteiro: ");
    scanf("%d", &number);

    if (number % 2 == 0) {
        printf("O valor %d e par!\n", number);
    } else {
        printf("O valor %d e impar!\n", number);
    }

    return 0;
}