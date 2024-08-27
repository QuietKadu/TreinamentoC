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
    printf("Media maior ou igual a 7: %d", ap);
    printf("\nMedia entre 5 e 6: %d", re);
    printf("\nMedia menor que 5: %d", rep);

    return 0;
}