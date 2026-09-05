#include <stdio.h>
int main()
{
    float n1, n2, n3;
    float p1, p2, p3;
    float media;

    printf("Primeira nota:");
    scanf("%d",&n1);
    printf("Peso 1:");
    scanf("%d",&p1);
    printf("Segunda nota:");
    scanf("%d",&n2);
    printf("Peso 2:",&p2);
    scanf("%d",&p2);
    printf("Terceira nota:");
    scanf("%d",&n3);
    printf("Peso 3:");
    scanf("%d",&p3);
    media = (n1 * p1 + n2 * p2 + n3 * p3) / (p1 + p2 + p3);

    printf("\n Media ponderada: %.2f",media);

    if ( media >= 7.0)
    {
        printf("Aprovado");
    }
    else if (media < 7 && media >= 3.0) {
        printf("Exame");
    }
    else if ( media < 3) {
        printf("Reprovado");
    }

}


