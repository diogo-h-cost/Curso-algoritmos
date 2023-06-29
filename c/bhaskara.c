#include <stdio.h>
#include <math.h>

int main()
{
    double a, b, c;

    printf("Coeficiente a: ");
    scanf("%lf", &a);

    printf("Coeficiente b: ");
    scanf("%lf", &b);

    printf("Coeficiente c: ");
    scanf("%lf", &c);

    double delt = pow(b, 2) - 4 * a * c;

    if (a == 0 || delt < 0) {
        printf("Esta equacao nao possui raizes reais\n");
    }
    else {
        double x1 = (-b + sqrt(delt)) / (2 * a);
        double x2 = (-b - sqrt(delt)) / (2 * a);
        printf("X1 = %.4lf\n", x1);
        printf("X2 = %.4lf\n", x2);
    }

    return 0;
}