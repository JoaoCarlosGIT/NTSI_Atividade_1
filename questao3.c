#include <stdio.h>

int main()
{
    int a; 
    int b; 
    int c;

    printf("Digite três numeros naturais: \n");
    printf("Valor A: ");
    scanf("%d", &a);
    printf("Valor B: ");
    scanf("%d", &b);
    printf("Valor C: ");
    scanf("%d", &c);

    if (a * a == b * b + c * c)
        printf("O triangulo é retangulo! \n");
    if else (b * b == a * a + c * c)
        printf("O triangulo é retangulo! \n");
    if else (c * c == a * a + b * b)
        printf("O triangulo é retangulo! \n");
    else
        printf("O triangulo não é retangulo! \n");

    return 0;
}
