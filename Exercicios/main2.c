#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	float nt1, nt2, nt3;
	int freq;
	printf("Digite tres notas: ");
	scanf("%f%f%f", &nt1, &nt2, &nt3);
	printf("Agora digite a sua frequencia: ");
	scanf("%d", &freq);
	if ((nt1 + nt2 + nt3) / 3 >= 7 && freq > 85 ) {
		printf("Voce foi aprovado");
	} else {
		printf("Voce nao foi aprovado");
	}
	
	return 0;
}