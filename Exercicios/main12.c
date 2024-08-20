#include <stdio.h>

int main()
{
    int num;
    int soma;
    printf("Digite um numero: ");
    scanf("%d", &num);
    for (int x = 0; x < 10; x++) {
        soma = num * x;
        printf("\n%d", soma);
    }

}