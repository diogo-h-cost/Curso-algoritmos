#include <stdio.h>

int main()
{
    int n;
    double soma, media;

    printf("Quantos numeros voce vai digitar? ");
    scanf("%d", &n);

    double vet[n];

    for (int i = 0; i < n; i++) {
        printf("Digite um numero: ");
        scanf("%lf", &vet[i]);
    }

    soma = 0;
    printf("\nValores = ");
    for (int i = 0; i < n; i++) {
        printf("%.1lf ", vet[i]);
        soma += vet[i];
    }

    media = soma / n;

    printf("\nSoma = %.2lf\n", soma);
    printf("Media = %.2lf\n", media);

    return 0;
}