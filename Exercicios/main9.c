#include <stdio.h>

int main()
{
    int num = 0;
    while (num < 1 || num > 5) {
        printf("Digite um numero de 1 a 5: ");
        scanf("%d", &num);
        if (num < 1 || num > 5) {
            printf("Entrada invalida\n\n");
        }
    } 
        printf("\nO numero digitado foi: %d", num);

    return 0;
}