#include <stdio.h>

int main() {
    float capacity, consumption;

    printf("Digite a capacidade da bateria: ");
    scanf("%f", &capacity);

    printf("Digite o consumo do circuito: ");
    scanf("%f", &consumption);

    if (consumption > 0) {
        float autonomy = capacity / consumption;
        printf("Autonomia esperada: %.2f horas\n", autonomy);
    } else {
        printf("ERRO! o Consumo deve ser maior do que zero.\n");
    }

    return 0;
}