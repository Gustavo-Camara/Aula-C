#include <stdio.h>
int main()
{
    float n1, n2, n3;
    float p1, p2, p3;
    float media;

    printf("Primeira nota:");
    scanf("%f",&n1);
    printf("Peso 1:");
    scanf("%f",&p1);
    printf("Segunda nota:");
    scanf("%f",&n2);
    printf("Peso 2:",&p2);
    scanf("%f",&p2);
    printf("Terceira nota:");
    scanf("%f",&n3);
    printf("Peso 3:");
    scanf("%",&p3);
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


