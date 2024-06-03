#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int senha, cargo;
	printf("Digite 1 gerente - 2 tecnico");
	scanf("%d", &cargo);
	printf("Digite sua senha: ");
	scanf("%d", &senha);
	if (cargo == 1 && senha == 1234){
		printf("Acesso foi liberado");
	} else if (cargo == 2 && senha == 4321) {
		printf("Acesso foi liberado");
	} else {
		printf("Acesso negado");
	}
	
	
	return 0;
}