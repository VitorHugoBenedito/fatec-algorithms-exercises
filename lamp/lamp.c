#include <stdio.h>

int main() {
    int status;

    printf("Digite o status da lampada (1 para queimada e 0 para operacional): ");
    scanf("%d", &status);

    if (status == 1) {
        printf("Trocar Lâmpada!\n");
    } else {
        printf("Tudo normal!\n");
    }

    return 0;
}