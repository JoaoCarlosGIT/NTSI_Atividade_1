#include <stdio.h>
#include <stdlib.h>

int main()
{
    int alunos;
    int *notas;
    int totalNotas = 0;
    int notaMaior = 0;
    int notaMenor = 10;
    int media = 0;
    int aux;

    printf("Quantidade de alunos: \n");
    scanf("%i", &alunos);

    for (aux = 0; aux < alunos; aux++){
        printf("Digite a nota do aluno %i: \n", aux + 1);
        scanf("%i", &notas[aux]);

        if (notas[aux] > notaMaior){
            notaMaior = notas[aux];
        }

        if (notas[aux] < notaMenor){
            notaMenor = notas[aux];
        }

        totalNotas = totalNotas + notas[aux];
    }

    media = totalNotas / alunos;

    printf("A media da turma foi: %i \n", media);
    printf("A maior nota foi: %i \n", notaMaior);
    printf("A menor nota foi: %i \n", notaMenor);
}