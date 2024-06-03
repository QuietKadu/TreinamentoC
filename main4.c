#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int carg, sen, an;
	float sal;
	printf("Digite seu salario: ");
	scanf("%f", &sal);
	printf(" 1 - Tecnico \n 2 - Gerente \n 3- Gerente \n");
	printf("Informe o cargo que voce pertence: ");
	scanf("%d", &carg);
	if (carg != 1 && carg != 2 && carg != 3) {
		printf("Erro, Informe um numero valido!");
	return 0;
	} else {
		printf("Digite a senha: ");
		scanf("%d", &sen);
		if (carg == 1 && sen == 1234 || carg == 2 && sen == 4321 || carg == 3 && sen == 4312){
			printf("Senha correta \n");
		} else {
			printf("Senha incorreta");
		return 0;
		}
		printf("Caso voce trabalhe na empresa menos de 5 anos ira ganhar um bonus de 15 porcento de salario + gratificacao \n");
		printf("Caso voce trabalhe na empresa mais de 5 anos ira ganhar o dobro do bonus anterior + gratificacao \n");
		printf("Digite quantos anos voce trabalha: ");
		scanf("%d", &an);
		if (an >= 5){
			switch (carg){
				case 1:          
					printf("O seu novo salario sera: %.2f", (0.50 * sal + sal) + (0.30 * sal));
					printf("Como gatificacao voce recebera um aumento de 500 reais");
				break;
				case 2:
					printf("O seu novo salario sera: %.2f", (0.30 * sal + sal) + (0.30 * sal));
					printf("Como gatificacao voce recebera um aumento de 500 reais");
				break;
				case 3:
					printf("O seu novo salario sera: %.2f", (0.20 * sal + sal) + (0.30 * sal));
					printf("Como gatificacao voce recebera um aumento de 500 reais");
				break;
			}
		} else {
				switch (carg){
				case 1:          
					printf("O seu novo salario sera: %.2f", (0.50 * sal + sal) + (0.15 * sal));
					printf("Como gatificacao voce recebera um aumento de 200 reais");
				break;
				case 2:
					printf("O seu novo salario sera: %.2f", (0.30 * sal + sal) + (0.15 * sal));
					printf("Como gatificacao voce recebera um aumento de 200 reais");
				break;
				case 3:
					printf("O seu novo salario sera: %.2f", (0.20 * sal + sal) + (0.15 * sal));
					printf("Como gatificacao voce recebera um aumento de 200 reais");
				break;
			}
		}
	}
	return 0;
}
