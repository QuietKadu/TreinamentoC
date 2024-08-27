#include <stdio.h>

int main()
{
    int id, contD = 1, contV = 1, contT = 1, contA = 1;
    float pes, pesD = 0, pesV = 0, pesT = 0, pesA = 0;
    for (int quant = 0; quant < 5; quant++) {
        printf("Digite uma idade: ");
        scanf("%d", &id);
        printf("Digite um peso: ");
        scanf("%f", &pes);
        printf("\n");
        if (id >= 1 && id <= 10) {
            pesD = pesD + pes;
            contD ++;
        }
        else if (id >= 11 && id <= 20) {
            pesV = pesV + pes;
            contV ++;
        }
        else if (id >= 21 && id <= 30) {
            pesT = pesT + pes;
            contT ++;
        }
        else {
            pesA = pesA + pes;
            contA ++;
        }
    }
    printf("A media do peso de 1 a 10 anos: %.2f", pesD / contD );
    printf("\nA media do peso de 11 a 20 anos: %.2f", pesV / contV);
    printf("\nA media do peso de 21 a 30 anos: %.2f", pesT / contT);
    printf("\nA media do peso de acima de 30 anos: %.2f", pesA / contA);

    return 0;
}