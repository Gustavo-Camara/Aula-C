#include <stdio.h>
#include <string.h>
int main ()

{
    char turno[50];
    
    printf("Digite o turno do aluno (manha/tarde/noite):");
    scanf("%s",turno);

    if (strcmp(turno, "manha") == 0)
    {
        printf("Matutino\n");
    }
    else if (strcmp(turno, "tarde") == 0)
    {
        printf("Vespertino\n");
    }
    else if (strcmp(turno, "noite") ==0)
    {   
        printf("noturno\n");
    }
    else {
        printf("Turno invalido\n");
    }

}