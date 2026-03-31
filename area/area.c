#include <stdio.h>

int main() {
    float radius;
    float pi = 3.1415;

    printf("Digite o raio: ");
    scanf("%f", &radius);

    float area = pi * (radius * radius);

    printf("Area da base é: %.2f\n", area);

    return 0;
}