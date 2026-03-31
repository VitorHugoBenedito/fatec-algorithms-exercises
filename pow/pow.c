#include <stdio.h>

int main() {
    float width, length;

    printf("Digite a largura do comodo em metros: ");
    scanf("%f", &width);

    printf("Digite o comprimento do comodo em metros: ");
    scanf("%f", &length);

    float area = width * length;
    float pow = area * 18;

    printf("Area do comodo: %.2f m²\n", area);
    printf("Potencia total: %.2f W\n", pow);

    return 0;
}