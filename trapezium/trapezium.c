#include <stdio.h>

int main() {
    float B, b, h;

    printf("Digite a base maior: ");
    scanf("%f", &B);

    printf("Digite a base menor: ");
    scanf("%f", &b);

    printf("Digite a altura: ");
    scanf("%f", &h);

    float area = ((B + b) * h) / 2;

    printf("Area do trapezio é: %.2f\n", area);

    return 0;
}