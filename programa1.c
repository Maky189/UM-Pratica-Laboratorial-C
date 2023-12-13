#include <stdio.h>

#define MESES 12

void calculoSalarios(float salarios[], int tamanho) 
{
    float total = 0;

    printf("Salário nos meses:\n");
    for (int i = 0; i < tamanho; i++) 
    {
        printf("Mês %d: %.2f\n", i + 1, salarios[i]);
        total += salarios[i];
    }

    printf("Total Anual: %.2f\n", total);
}

int main() 
{
    float salarios[MESES];

    printf("salario do funcionario:\n");

    for (int i = 0; i < MESES; i++) 
    {
        printf("Salário %d: ", i + 1);
        scanf("%f", &salarios[i]);
    }

    calculoSalarios(salarios, MESES);

    return 0;
}




