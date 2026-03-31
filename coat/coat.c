#include <stdio.h>

int main() {
    float temperature;

    printf("Digite a temperatura atual: ");
    scanf("%f", &temperature);


    if (temperature < 20.0) {
        printf("Casaco\n");
    } else {
        printf("Camiseta\n");
    }

    return 0;
}