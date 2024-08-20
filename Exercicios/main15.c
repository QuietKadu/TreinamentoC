#include <stdio.h>

int main()
{
    int num, num2;
    for (num = 1; num < 10 + 1; num++) {
        printf("\n\nTabuada %d", num);
        
        for (num2 = 0; num2 < 10 + 1; num2++) {
            printf("\n%d X %d = %d", num, num2, num * num2);
        }
    }

}