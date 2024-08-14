#include <stdio.h>

int main()
{
    int num = 1;
    int numP, numN;
    while (num != 0 ) {
        printf("Digite numeros seja negativo ou positivo (0 para ir nos resultados): ");
        scanf("%d", &num);
        if (num < 0) {
            numN = numN + num; 
        } else {
            numP = numP + num; 
        }
    }
    printf("\nA soma dos numeros positivos e: %d", numP);
    printf("\nA soma dos numeros negativos e: %d", numN);
    printf("\nA soma dos numeros negativos e dos numeros positivos: %d", numP + numN);
    return 0;
}