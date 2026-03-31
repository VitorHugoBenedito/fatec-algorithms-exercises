#include <stdio.h>

int main() {
    int N;

    printf("Digite o numero de lados do poligno: ");
    scanf("%d", &N);

    float diagonals = (N * (N - 3)) / 2.0;

    printf("Numero de diagonals: %.0f\n", diagonals);

    return 0;
}