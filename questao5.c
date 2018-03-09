#include <stdio.h>

int main(void)
{
    int contaDigitos = 0; 
    int numero;
    printf("Digite um Número: ");
    scanf("%d", &numero);
    do
    {
        contaDigitos = contaDigitos + 1;
        numero = numero / 10;
    } while (numero != 0);
    printf("Número de Dígitos: %d\n", contaDigitos);
    return 0;
}
