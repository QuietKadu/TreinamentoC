#include <stdio.h>

int main()
{
    int num, soma = 1;
    printf("A soma dos primeiros numeros inteiros: ");
    for (int cont = 2; cont < 100 + 1; cont ++) {
        num = soma+ cont;
        printf("\n%d + %d = %d", soma, cont, num);
        soma = num;
        printf("\n");
    }

    return 0;
}