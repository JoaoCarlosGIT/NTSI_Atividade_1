#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1;
    int aux1;
    int aux2;

    printf("Digite um número Inteiro: ");
    scanf("%d", &n1);

    for (aux2 = 31; aux2 >= 0; aux2--)
    {
        aux1 = n1 >> aux2;
        if (aux1 & 1)
        {
            printf("1");
        }
        else
        {
            printf("0");
        }
    }
    printf("\n");

    getchar();
} 
