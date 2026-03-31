#include <stdio.h>

int main() {
    float salary, newSalary;

    printf("Digite o salario: ");
    scanf("%f", &salary);

    if (salary <= 500) {
        newSalary = salary * 1.20;
    } else {
        newSalary = salary * 1.10;
    }

    printf("Valor do novo salário: R$ %.2f\n", newSalary);

    return 0;
}