#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int num, num2;
	printf("Digite um numero: ");
	scanf("%d", &num);
	printf("Digite outro numero: ");
	scanf("%d", &num2);
	while (num < num2 || num2 < num) {
		if (num < num2 - 1) {
			num ++;
			printf("%d\n", num);
		}
		else if (num2 < num - 1) {
			num2 ++;
			printf("%d\n", num2);
		}
	}
}
