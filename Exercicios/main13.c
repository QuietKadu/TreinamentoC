#include <stdio.h>

int main()
{
    int num = 0;
    int tenTwenty = 0;
    int twentyOneFifth = 0;
    int fifthOneOnehundred = 0;
    int onehundredOrHigh = 0;
    for (int cont = 0; cont < 5; cont ++) {
        printf("Digite vinte numeros: ");
        scanf("%d", &num);
        if (num >= 10 && num <= 20) {
            tenTwenty++;
        } else if (num >= 21 && num <= 50) {
            twentyOneFifth++;
        } else if (num >= 51 && num <= 100) {
            fifthOneOnehundred++;
        } else if (num > 100) {
            onehundredOrHigh++;
        }
    }
    printf("De 10 a 20: %d", tenTwenty);
    printf("\nDe 21 a 50: %d", twentyOneFifth);
    printf("\nDe 51 a 100: %d", fifthOneOnehundred);
    printf("\nDe 100 ou maior: %d", onehundredOrHigh);
}