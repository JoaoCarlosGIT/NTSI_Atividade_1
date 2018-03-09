#include <stdio.h>

int main(void)
{
    unsigned long contaDigitos = 0; 
    unsigned long numero;
    printf("Digite um Número: ");
    scanf("%ld", &numero);
    do
    {
        contaDigitos = contaDigitos + 1;
        numero = numero / 10;
    } while (numero != 0);
    printf("Número de Dígitos: %ld\n", contaDigitos);
    return 0;
}
