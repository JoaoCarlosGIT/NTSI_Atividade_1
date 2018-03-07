#include <stdio.h>

int main(void)
{
    int contaDigitos = 0, valor;
    printf("Digite um Número: ");
    scanf("%d", &valor);
    do
    {
        contaDigitos = contaDigitos + 1;
        valor = valor / 10;
    } while (valor != 0);
    printf("Número de Dígitos: %d\n", contaDigitos);
    return 0;
}
