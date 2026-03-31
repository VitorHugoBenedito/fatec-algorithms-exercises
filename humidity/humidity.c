#include <stdio.h>

int main()
{
    int humidity;
    int countError = 0;

    printf("Digite o valor lido no sensor: ");
    scanf("%d", &humidity);

    while (humidity < 0) {
        if (countError < 3) {
            printf("ERRO: Leitura invalida do sensor!\n");
            printf("Digite o valor lido no sensor: ");
            scanf("%d", &humidity);
            countError++;
        } else {
            printf("ERRO: Leitura invalida do sensor! ACIONAR SENSOR DE ALERTA\n");
            return 0;
        }
    }

    if (humidity < 30) {
        printf("STATUS: Umidade critica (%d%%). LIGANDO BOMBA.\n", humidity);
    } else {
        printf("STATUS: Umidade adequada (%d%%). BOMBA DESLIGADA.\n", humidity);
    }

    return 0;
}