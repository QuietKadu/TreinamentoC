#include <stdio.h>

int main()
{
    int pes = 1;
    int ante = 0;
    while (pes != 0) {
        printf("Dgite um valor aleatorio (0 para finalizar o programa): ");
        scanf("%d", &pes);
        if (pes > ante) {
            printf("%d\n\n", pes);
        } else {
            printf("%d\n\n", ante);
        }
        ante = pes;
    }

    return 0;
}
