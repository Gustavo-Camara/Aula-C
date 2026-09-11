#include <stdio.h>

void main()
{
    int tip;         // escolha da operacao: inteiro
    float resultado; // resultado da conta: float
    int n1;
    int n2;

    printf("Digite o primeiro numero: ");
    scanf("%d", &n1);
    printf("Digite o segundo numero: ");
    scanf("%d", &n2);
    printf("Digite o tipo de operacao: ");
    scanf("%d", &tip);

    if (n2 == 0 && tip == 4)
    {
        printf("Nao e possivel dividir por zero");
    }
    else
    {
        switch (tip)
        {
            case 1:
                resultado = n1 + n2;
                printf("A soma dos numeros e: %.2f", resultado);
                break;
            case 2:
                resultado = n1 - n2;
                printf("A subtracao dos numeros e: %.2f", resultado);
                break;
            case 3:
                resultado = n1 * n2;
                printf("A multiplicacao dos numeros e: %.2f", resultado);
                break;
            case 4:
                resultado = (float)n1 / n2;
                printf("A divisao dos numeros e: %.2f", resultado);
                break;
            default:
                printf("Operacao invalida");
        }
    }
}
