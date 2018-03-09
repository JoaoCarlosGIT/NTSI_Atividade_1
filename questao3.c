#include <stdio.h>

int main()
{
    int a, b, c, aux;

    printf("Digite três numeros naturais: \n");
    printf("Valor A: ");
    scanf("%d", &a);
    printf("Valor B: ");
    scanf("%d", &b);
    printf("Valor C: ");
    scanf("%d", &c);

    if (b > a)
    {
        aux = a;
        a = b;
        b = aux;
    }
    if (c > a)
    {
        aux = a;
        a = c;
        c = aux;
    }

    if (a * a == b * b + c * c)
        printf("O triangulo é retangulo! \n");
    else
        printf("O triangulo não é retangulo! \n");

    return 0;
}
