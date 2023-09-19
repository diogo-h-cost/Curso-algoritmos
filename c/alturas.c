#include <stdio.h>

int main()
{
    int n, cont;
    double soma, media, por;

    printf("Quantas pessoas? ");
    scanf("%d", &n);

    char nome[n][50];
    int idade[n];
    double altura[n];

    for (int i = 0; i < n; i++) {
        printf("Dados da %da pessoa:\n", i + 1);

        printf("Nome: ");
        fseek(stdin, 0, SEEK_END);
        gets(nome[i]);

        printf("Idade: ");
        scanf("%d", &idade[i]);

        printf("Altura: ");
        scanf("%lf", &altura[i]);
    }

    soma = 0;
    for (int i = 0; i < n; i++) {
        soma += altura[i];
    }
    media = soma / n;
    printf("\nAltura media: %.2lf\n", media);

    cont = 0;
    for (int i = 0; i < n; i++) {
        if (idade[i] < 16) {
            cont += 1;
        }
    }
    por = cont * 100 / n;
    printf("Pessoas com menos de 16 anos: %.1lf %%\n", por); // print -> % = %%

    for (int i = 0; i < n; i++) {
        if (idade[i] < 16) {
            printf("%s\n", nome[i]);
        }
    }

    return 0;
}