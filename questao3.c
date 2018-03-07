#include <stdio.h>

int main()
{
    int pontoa, pontob, pontoc, x;

    printf("Digite três numeros naturais: \n");
    printf("Valor A: ");
    scanf("%d", &pontoa);
    printf("Valor B: ");
    scanf("%d", &pontob);
    printf("Valor C: ");
    scanf("%d", &pontoc);

    if (pontob > pontoa)
    {
        x = pontoa;
        pontoa = pontob;
        pontob = x;
    }
    if (pontoc > pontoa)
    {
        x = pontoa;
        pontoa = pontoc;
        pontoc = x;
    }

    if (pontoa * pontoa == pontob * pontob + pontoc * pontoc)
        printf("O triangulo é retangulo! \n");
    else
        printf("O triangulo não é retangulo! \n");

    return 0;
}