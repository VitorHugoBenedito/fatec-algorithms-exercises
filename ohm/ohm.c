#include <stdio.h>

int main() {
    float vcc;
    float vf = 2.0;
    float a = 0.02;

    printf("Digite a tensao da fonte: ");
    scanf("%f", &vcc);

    if (vcc > vf) {
        float r = (vcc - vf) / a;
        printf("Resistor: %.2f ohms\n", r);
    } else {
        printf("Erro! A tensao da fonte deve ser maior que 2V\n");
    }

    return 0;
}