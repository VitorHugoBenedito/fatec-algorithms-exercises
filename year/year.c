#include <stdio.h>

int main() {
    int currentYear, birth;

    printf("Digite o seu ano de nascimento: ");
    scanf("%d", &birth);

    printf("Digite o ano atual: ");
    scanf("%d", &currentYear);

    int year = currentYear - birth;

    printf("Sua idade é: %d anos\n", year);

    return 0;
}