#include <stdio.h>

int main()
{
    int age;

    printf("Digite a sua idade: ");
    scanf("%d", &age);

    while (age <= 0) {
        printf("Idade invalida\n");
        printf("Digite novamente a sua idade: ");
        scanf("%d", &age);
    }

    if (age >= 18) {
        printf("Voce e maior de idade!\n");
    } else {
        printf("Voce e menor de idade!\n");
    }

    return 0;
}