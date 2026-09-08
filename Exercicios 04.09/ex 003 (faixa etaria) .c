#include <stdio.h>

void man ()

{
    int idade;
    int faixa;

    printf("Digite a idade: ");
    scanf("%d", &idade);
    printf("Digite a faixa etaria do filme (1- Infantil, 2- Adolescente, 3- Adulto): ");
    scanf("%d", &faixa);

    if (faixa == 1 && idade < 12)
    {
        printf("Entrada permitida.\n");
    }
    else if (faixa == 2 && idade >= 12 && idade < 18)
    {
        printf("Entrada permitida.\n");
    }
    else if (faixa == 3 && idade >= 18)
    {
        printf("Entrada permitida.\n");
    }
    else
    {
        printf("Entrada não permitida.\n");
    }
}