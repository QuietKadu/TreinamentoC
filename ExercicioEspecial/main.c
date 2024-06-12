#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	float is, in, cs, ci, c, iqar;
	char opc = 'S';
	char senh[1000], confirm[1000];
	int menu;
	printf("================================= \n");
	printf("MONITORAMENTO DE QUALIDADE DE AR \n");
	printf("================================= \n");
	printf("Ola seja bem vindo!! \n \n");
	while (strcmp(senh, confirm) != 0) {
		printf("Digite sua senha: ");
		scanf("%s", &senh);
		printf("Confirme sua senha: ");
		scanf("%s", &confirm);
		if (strcmp(senh, confirm) != 0) {
			printf("\nSenha incorreta, insira novamente\n\n");
		}	
	}
	printf("\nSenha correta!\n");
	while (menu != 1 && menu != 2 && menu != 3) {
		printf("\n1 - Calcular\n");
		printf("2 - Sobre\n");
		printf("3 - Sair\n");
		printf("Digite a opcao que voce deseja: ");
		scanf("%d", &menu);
		if (menu != 1 && menu != 2 && menu != 3) {
			printf("\nOpcao incorreta, digite novamente\n");
		}
	}
	switch (menu) {
		case 1:
			while (opc == 'S' || opc == 's') {
				printf("\nDigite o ISup(valor critico superior do indice): ");
				scanf("%f", &is);
				printf("Digite o IInf(valor critico inferior do indice): ");
				scanf("%f", &in);
				printf("Digite o concentracao do poluente que corresponde ao CInf(a concentracao do poluente que corresponde ao ISup): ");
				scanf("%f", &cs);
				printf("Digite a concentracao do poluente que corresponde ao C(a concentracao do poluente que corresponde ao IInf): ");
				scanf("%f", &ci);
				printf("Digite a concentracao medida para o poluente em questao: ");
				scanf("%f", &c);
				iqar = (is - in) / (cs - ci) * (c - ci) + in;
				if (iqar <= 50 ) {
					printf("\nA qualidade do ar esta no nivel [BOA] \n\n");
					printf("Descricao: Nao ha praticamente risco a saude. \n \n");
				}
				else if (iqar >= 51 && iqar <= 100) {
					printf("\nA qualidade do ar esta no nivel [REGULAR] \n \n");
					printf("Descricao: Pessoas de grupos sensiveis (criancas, idosos e pessoas com doencas respiratorias e cardiacas), podem apresentar sintomas como tosse seca cansaco. A populacao, em geral, nao e afetada. \n \n");
				}
				else if (iqar >= 101 && iqar <= 199) {
					printf("\nA qualidade do ar esta no nivel [INADEQUADA] \n");
					printf("[ALERTA!!! RISCO MEDIANO MESMO ASSIM FIQUE ATENTO] \n \n");
					printf("Descricao: Toda a populacao pode apresentar sintomas como tosse seca, cansaço, ardor nos olhos, nariz e garganta. Pessoas de grupos sensiveis (criancas, idosos e pessoas com doencas respiratorias e cardiacas), podem apresentar efeitos mais serios na saude. \n \n");
				}
				else if (iqar >= 200 && iqar <= 299) {
					printf("\nA qualidade do ar esta no nivel [MA] \n");
					printf("[ALERTA!!! RISCO ALTO] \n \n");
					printf("Descricao: Toda a populacao pode apresentar agravamento dos sintomas como tosse seca, cansaco, ardor nos olhos, nariz e garganta e ainda apresentar falta de ar e respiracao ofegante. Efeitos ainda mais graves a saude de grupos sensiveis (criancas, idosos e pessoas com problemas cardiovasculares). \n \n");
				}
				else if (iqar >= 300 && iqar <= 399) {
					printf("\nA qualidade do ar esta no nivel [PESSIMO] \n");
					printf("[ALERTA EMERGENCIAL!!! RISCO MUITO ALTO] \n \n");
					printf("Descricao: Toda a populacao pode apresentar serios riscos de manifestacoes de doencas respiratorias e cardiovasculares. Aumento de mortes prematuras em pessoas de grupos sensiveis. \n \n");
				}
				else if (iqar > 400) {
					printf("\nA qualidade do ar esta no nivel [CRITICA] \n");
					printf("[ALERTA EMERGENCIAL!!! RISCO MUITO ALTO] \n \n");
					printf("Descricao: Toda a populacao pode apresentar serios riscos de manifestacoes de doencas respiratorias e cardiovasculares. Aumento de mortes prematuras em pessoas de grupos sensiveis. \n \n");
				}
				printf("Deseja continuar? [S/N]: ");
				scanf("%s", &opc);
			}
		break;
		case 2:
			printf("\nO indice de qualidade do ar nos permite entender os niveis de poluicao atmosferica concentrada em ambientes internos e  externos e as propriedades que tornam o ar improprio e ofensivo a saude e ao meio ambiente. Nosso projeto concente em   criar um programa que calcule a qualidade do ar em todos os lugares.\n");
		break;
		case 3:
		break;			
	}
	
	printf("\nPrograma finalizado");

	return 0;
}
