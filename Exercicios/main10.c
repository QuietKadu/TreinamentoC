#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int num = 0;
    srand(time(0));
    int ale = rand() % 100;
    while (num != ale) {
        printf("Digite o numero de 1 a 100 e descubra o numero secreto: ");
        scanf("%d", &num);
        if (num != ale) {
            printf("\nNumero incorreto, tente novamente\n\n");
        }
    }
    printf("O numero secreto foi: %d", ale);
    
    

}