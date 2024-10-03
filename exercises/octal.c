#include <stdio.h>

int main(void) {
    int num, numRem1, numRem2, numRem3, numRem4, numRem5;
    printf("Enter a number between 0 and 32767: ");
    scanf("%d", &num);
    numRem1 = num % 8;
    num = num / 8;
    numRem2 = num % 8;
    num = num / 8;
    numRem3 = num % 8;
    num = num / 8;
    numRem4 = num % 8;
    num = num / 8;
    numRem5 = num % 8;
    printf("In octal, your number is: %1d%1d%1d%1d%1d\n", numRem5, numRem4, numRem3, numRem2, numRem1);
}
