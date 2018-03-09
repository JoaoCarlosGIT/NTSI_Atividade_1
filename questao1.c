#include <stdio.h>

int main(){
    int n1;
    int n2;
    int aux;

    printf("Digite o primeiro número: ");
    scanf("%d", &n1);

    printf("Digite o último número: ");
    scanf("%d", &n2);

    for(aux = n1; aux <= n2; aux++){
        if((aux % 2) == 0 & (aux % 3) == 0){
            printf("%d \n", aux);
        }
    }
    return 0;
}
