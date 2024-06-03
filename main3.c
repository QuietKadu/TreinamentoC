#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int sen, carg;
	printf("Digite - 1 Gerente - 2 Tecnico: ");
	scanf("%d", &carg);
	if (carg == 1 || carg == 2) {
		printf("Digite sua senha: ");
		scanf("%d", &sen);
		if (carg == 1 && sen == 1234) {
			printf("Acesso liberado");
		} 
		else if (carg == 2 && sen == 4321) {
			printf("Acesso liberado");
		} else {
			printf("Acesso negado");
		} 	
	} else {
		printf("Erro, digite um numero valido");
		return 0;
	}
}