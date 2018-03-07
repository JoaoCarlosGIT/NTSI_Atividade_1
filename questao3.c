#include <stdio.h>

int main()
{
    int a, b, c, x;

    printf("Digite três numeros naturais: \n");
    printf("Valor A: ");
    scanf("%d", &a);
    printf("Valor B: ");
    scanf("%d", &b);
    printf("Valor C: ");
    scanf("%d", &c);

    if (b > a)
    {
        x = a;
        a = b;
        b = x;
    }
    if (c > a)
    {
        x = a;
        a = c;
        c = x;
    }

    if (a * a == b * b + c * c)
        printf("O triangulo é retangulo! \n");
    else
        printf("O triangulo não é retangulo! \n");

    return 0;
}