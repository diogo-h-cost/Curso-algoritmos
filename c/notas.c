#include <stdio.h>

int main()
{
    double not1, not2;

    printf("Digite a primeira nota: ");
    scanf("%lf", &not1);

    printf("Digite a segunda nota: ");
    scanf("%lf", &not2);

    double notfin = not1 + not2;

    printf("NOTA FINAL = %.1lf\n", notfin);

    if (notfin < 60.0) {
        printf("REPROVADO\n");
    }

    return 0;
}