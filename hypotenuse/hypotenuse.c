#include <stdio.h>
#include <math.h>

int main() {
    float cat1, cat2;

    printf("Digite o primeiro cateto: ");
    scanf("%f", &cat1);

    printf("Digite o segundo cateto: ");
    scanf("%f", &cat2);

    float hypotenuse = sqrt(pow(cat1, 2) + pow(cat2, 2));

    printf("Hipotenusa: %.2f\n", hypotenuse);

    return 0;
}