#include <stdio.h>
int main()
{
    int torta, abobora, almondega, vot15 = 0, vot20 = 0, vot17 = 0, vot7 = 0, vot43 = 0, vot31 = 0,
    vot26 = 0, vot78 = 0, vot001 = 0, vot002 = 0, vot28 = 0, vot70 = 0, vot21 = 0, vot13 = 0, vot22 = 0, vot10 = 0, vot69 = 0,
    vot63 = 0, soma;  
    float porcentagem15, porcentagem20, porcentagem17, porcentagem7, porcentagem43, porcentagem31, porcentagem78, porcentagem001, 
    porcentagem28, porcentagem70, porcentagem21, porcentagem13, porcentagem22, porcentagem10, porcentagem69, porcentagem63, porcentagem002, porcentagem26;
    printf("Bem vindo a urna\n\n");
    printf("Vote nos seguintes candidatos a prefeito abaixo:\n\n");
    printf("15 - Gilberto Barros - (PT)");
    printf("\n20 - Faustao - (PCDB)");
    printf("\n17 - Supla - (PL)");
    printf("\n7  - Cristiano Ronaldo - (XD)");
    printf("\n43 - Ednaldo Pereira - (XD)");
    printf("\n31 - Elon Musk - (PL)");
    printf("\n20 - Ratinho   - (PL)");
    printf("\n78 - Chapolim Colorado (PCDB)");
    printf("\n00 - NULO");
    printf("\n\nVote nos seguintes candidatos a vereadores abaixo:\n\n");
    printf("28 - Pablo Marcal - (PRTB)");
    printf("\n70 - Manoel Gomes - (XD)");
    printf("\n21 - Gabriel o Pensador - (XD)");
    printf("\n13 - Rafael Lange - (PT)");
    printf("\n22 - Felipe Neto  - (PL)");
    printf("\n10 - Ricardo Izecson - (PT)");
    printf("\n69 - Belle Delphine - (SEX)");
    printf("\n63 - Celso Portiolli - (PT)");
    printf("\n00 - NULO");
    while (abobora < 2) {
        printf ("\n\nVote em seu prefeito: ");
        scanf ("%d", &torta);
        printf ("\n\nVote em seu vereador: ");
        scanf ("%d", &almondega);
        if (torta != 341519 ) {
            printf("\ninsira informacoes sobre o candidato a prefeito Nº%d!", torta);
        }
        else if (torta == 341519) {
            printf("\ninsira informacoes sobre o candidato a prefeito Nº%d!", torta);
            abobora++;
        }
        else if (almondega == 341519) { 
            printf ("\ninsira informacoes sobre o candidato a vereador Nº%d!", almondega);
            abobora++;
        }
        
        if (torta == 15) vot15++;
        else if (torta == 20) vot20++;
        else if (torta == 17) vot17++;
        else if (torta == 7)  vot7++;
        else if (torta == 43) vot43++;
        else if (torta == 31) vot31++;
        else if (torta == 78) vot78++;
        else if (torta == 00) vot001++;

        if (almondega == 28) vot28++;
        else if (almondega == 70) vot70++;
        else if (almondega == 21) vot21++;
        else if (almondega == 13) vot13++;
        else if (almondega == 22) vot22++;
        else if (almondega == 10) vot10++;
        else if (almondega == 69) vot69++;
        else if (almondega == 63) vot63++;
        else if (almondega == 00) vot002++;
    }
    soma = vot15 + vot20 + vot17 + vot7 + vot43 + vot31 + vot78 + vot001 + vot28 + vot70 + vot21 + vot13 + vot22 + vot10 +vot69 + vot63 + vot002;
    porcentagem15 = (float)vot15 / soma * 100;
    porcentagem20 = (float)vot20 / soma * 100;
    porcentagem17 = (float)vot17 / soma * 100;
    porcentagem7 = (float)vot7 / soma * 100;
    porcentagem43 = (float)vot43 / soma * 100;
    porcentagem31 = (float)vot31 / soma * 100;
    porcentagem78 = (float)vot78 / soma * 100;
    porcentagem001 = (float)vot001 / soma * 100;
    porcentagem28 = (float)vot28 / soma * 100;
    porcentagem70 = (float)vot70 / soma * 100;
    porcentagem21 = (float)vot21 / soma * 100;
    porcentagem13 = (float)vot13 / soma * 100;
    porcentagem22 = (float)vot22 / soma * 100;
    porcentagem10 = (float)vot10 / soma * 100;
    porcentagem69 = (float)vot69 / soma * 100;
    porcentagem63 = (float)vot63 / soma * 100;
    porcentagem002 = (float)vot002 / soma * 100;
    porcentagem26 = (float)vot26 / soma * 100;
    printf("\nA urna foi encerrada pelo presidente da secao!");
    printf("Vote nos seguintes candidatos a prefeito abaixo:\n\n");
    printf("15 - Gilberto Barros - (PT) = %d e a porcentagem foi: %.2f", vot15, porcentagem15);
    printf("\n20 - Faustao - (PCDB) = %d e a porcentagem foi: %.2f", vot20, porcentagem20);
    printf("\n17 - Supla - (PL) = %d e a porcentagem foi: %.2f", vot17, porcentagem17);
    printf("\n7  - Cristiano Ronaldo - (XD) = %d e a porcentagem foi: %.2f", vot7, porcentagem7);
    printf("\n43 - Ednaldo Pereira - (XD) = %d e a porcentagem foi: %.2f", vot43, porcentagem43);
    printf("\n31 - Elon Musk - (PL) = %d e a porcentagem foi: %.2f", vot31, porcentagem31);
    printf("\n26 - Ratinho   - (PL) = %d e a porcentagem foi: %.2f", vot26, porcentagem26);
    printf("\n78 - Chapolim Colorado (PCDB) = %d e a porcentagem foi: %.2f", vot78, porcentagem78);
    printf("\n00 - NULO = %d e a porcentagem foi: %.2f", vot001, porcentagem001);
    printf("\n\nVote nos seguintes candidatos a vereadores abaixo:\n\n");
    printf("28 - Pablo Marcal - (PRTB) = %d e a porcentagem foi: %.2f", vot28, porcentagem28);
    printf("\n70 - Manoel Gomes - (XD) = %d e a porcentagem foi: %.2f", vot70, porcentagem70);
    printf("\n21 - Gabriel o Pensador - (XD) = %d e a porcentagem foi: %.2f", vot21, porcentagem21);
    printf("\n13 - Rafael Lange - (PT) = %d e a porcentagem foi: %.2f", vot13, porcentagem13);
    printf("\n22 - Felipe Neto  - (PL) = %d e a porcentagem foi: %.2f", vot22, porcentagem22);
    printf("\n10 - Ricardo Izecson - (PT) = %d e a porcentagem foi: %.2f", vot10, porcentagem10);
    printf("\n69 - Belle Delphine - (SEX) = %d e a porcentagem foi: %.2f", vot69, porcentagem69);
    printf("\n63 - Celso Portiolli - (PT) = %d e a porcentagem foi: %.2f", vot63, porcentagem63);
    printf("\n00 - NULO = %d", vot002);
    printf("\n\nTotal de votos foi: %d", soma / 2);
    return 0;
}