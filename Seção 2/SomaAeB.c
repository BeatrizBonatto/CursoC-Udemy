#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int a, b, soma;

    printf("Digite um numero inteiro: ");
    scanf("%d", &a);

    printf("Digite um numero inteiro: ");
    scanf("%d", &b);

    soma = a + b;

    printf("\nValoe da soma = %d\n", soma);

    system("pause");
    return 0;
}