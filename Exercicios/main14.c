#include <stdio.h>

int main()
{
    int num, numse;
    printf("Digite um numero: ");
    scanf("%d", &num);
    for (numse = 0; numse < num + 1; numse++ ) {
        printf("\nA raiz quadrada de %d e: %d", numse, numse * numse);
    }

}