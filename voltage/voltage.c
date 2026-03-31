#include <stdio.h>

int main()
{
    float voltage;
    int countError = 0;

    printf("Digite o valor lido no sensor: ");
    scanf("%f", &voltage);

    while (voltage < 0) {
        if (countError < 3) {
            printf("ERRO: Leitura invalida do sensor!\n");
            printf("Digite o valor lido no sensor: ");
            scanf("%f", &voltage);
            countError++;
        } else {
            printf("ERRO: Leitura invalida do sensor! ACIONAR SENSOR DE ALERTA\n");
            return 0;
        }
    }

    if (voltage < 3.0) {
        printf("SUBTENSAO\n");
    }
    else if (voltage > 4.2) {
        printf("SOBRETENSAO\n");
    }
    else {
        printf("BATERIA OK\n");
    }

    return 0;
}