#include <stdio.h>

int main()
{
    double lar, comp, val;

    printf("Digite a largura do terreno: ");
    scanf("%lf", &lar);

    printf("Digite o comprimento do terreno: ");
    scanf("%lf", &comp);

    printf("Digite o valor do metro quadrado: ");
    scanf("%lf", &val);

    double area = lar * comp;
    double prec = area * val;

    printf("Area do terreno = %.2lf\n", area);
    printf("Preco do terreno: %.2lf\n", prec);

    return 0;
}