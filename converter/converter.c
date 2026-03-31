#include <stdio.h>

int main() {
    int x;

    printf("Digite o valor lido pelo ADC (0 a 1023): ");
    scanf("%d", &x);

    float voltage = (x * 5.0) / 1023;

    printf("Tensao equivalente: %.2f V\n", voltage);

    return 0;
}