#include <stdio.h>

int main() {
    int birth, currentYear;

    printf("Digite o ano do seu nascimento: ");
    scanf("%d", &birth);

    printf("Digite o ano atual: ");
    scanf("%d", &currentYear);

    int currentAge = currentYear - birth;
    int ageIn2050 = 2050 - birth;

    printf("Sua idade atual é: %d anos\n", currentAge);
    printf("O sua idade em 2050 será de: %d anos\n", ageIn2050);

    return 0;
}