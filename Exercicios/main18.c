#include <stdio.h>

int main()
{
    float nota, nota2, nota3, media;
    int ap, re, rep;
    for (int cont = 0; cont < 2; cont ++) {
        printf("Digite tres notas: ");
        scanf("%f%f%f", &nota, &nota2, &nota3);
        printf("\n");
        media = (nota + nota2 + nota3) / 3;
        if (media >= 7) {
            ap ++;
        }
        else if (media >= 5 && media <= 6) {
            re ++;
        }
        else {
            rep ++;
        }
    }
    printf("Aprovados: %d", ap);
    printf("\nRecuperacao: %d", re);
    printf("\nReprovados: %d", rep);

    return 0;
}
