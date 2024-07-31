#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	char choice = 's';
	int num, num2;
	while (choice == 's' || choice == 'S') {
		printf("Digite um numero: ");
		scanf("%d", &num);
		printf("Digite mais um numero: ");
		scanf("%d", &num2);
		printf("\n%d + %d = %d\n", num, num2, num + num2);
		printf("%d - %d = %d\n", num, num2, num - num2);
		printf("%d * %d = %d\n", num, num2, num * num2);
		printf("%d / %d = %d\n", num, num2, num / num2);
		
		printf("\nDeseja continuar? [S/N]: ");
		scanf("%s", &choice);
		printf("\n");
	}
}