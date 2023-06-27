#include <stdio.h>
#include <math.h>

int main()
{
    double bas, alt;

    printf("Base do retangulo: ");
    scanf("%lf", &bas);

    printf("Altura do retangulo: ");
    scanf("%lf", &alt);

    double area = bas * alt;
    double peri = 2 * (bas + alt);
    double diag = sqrt(pow(bas, 2.0) + pow(alt, 2.0));

    printf("AREA = %.4lf\n", area);
    printf("PERIMETRO = %.4lf\n", peri);
    printf("DIAGONAL = %.4lf\n", diag);

    return 0;
}