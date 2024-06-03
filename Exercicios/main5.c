#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	char opc; 
	int nm, nm2;
	printf("| + | - | / | * | \n");
	printf("Digite um operador: ");
	scanf("%s", &opc);
	if (opc != '+' && opc != '-' && opc != '/' && opc != '*' ){
		printf("Erro, reinicie o programa para tentar novamente");
	return 0;
	} else{
		printf("Digite o numero que voce deseja calcular: ");
		scanf("%d", &nm);
		printf("Digite outro numero que voce deseja calcular: ");
		scanf("%d", &nm2);
		switch (opc) {
			case '+':
				printf("%d + %d = %d\n", nm, nm2, nm + nm2);
			break;
			case '-':
				printf("%d - %d = %d\n", nm, nm2, nm - nm2);
			break;
			case '/':
				printf("%d / %d = %d\n", nm, nm2, nm / nm2);
			break;
			case '*':
				printf("%d * %d = %d\n", nm, nm2, nm * nm2);
			break;
		}
	}
	return 0;
}