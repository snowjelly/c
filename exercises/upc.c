#include <stdio.h>

int main(void) {
    int n1, n2, n3, n4, n5, n6, n7, n8, n9, n10, n11, sum1, sum2,
    result_digit, check_digit;

    printf("Enter the first (single) digit: ");
    scanf("%d", &n1);
    printf("Enter first group of five digits: ");
    scanf("%1d%1d%1d%1d%1d", &n2, &n3, &n4, &n5, &n6);
    printf("Enter second group of five digits: ");
    scanf("%1d%1d%1d%1d%1d", &n7, &n8, &n9, &n10, &n11);

    printf("Enter the final digit for verification: ");
    scanf("%d", &check_digit);

    sum1 = n1 + n3 + n5 + n7 + n9 + n11;
    sum2 = n2 + n4 + n6 + n8 + n10;
    result_digit = 9 - ((((sum1 * 3) + sum2) - 1) % 10);
    // printf("First: Check digit: %d\n", result_digit);
    // result_digit = (10 - (((sum1 * 3) + sum2) % 10)) % 10;

    printf("Check digit: %d\n", result_digit);

    if (check_digit == result_digit) {
      printf("VALID\n");
    } else {
      printf("NOT VALID\n");
    }
}

// int main(void) {
//   int upc, n1, n2, n3, n4, n5, n6, n7, n8, n9, n10, n11, sum1, sum2,
//       result_digit;

//   printf("Enter the first 11 digits of a UPC: ");
//   scanf("%d", &upc);

//   // n1 = upc / 100;
//   n10 = upc % 100 / 10;
//   n11 = upc % 10;
//   upc = upc / 100;
//   n9 = upc % 10;
//   n8 = upc % 100 / 10;
//   upc = upc / 100;
//   n7 = upc % 10;
//   n6 = upc % 100 / 10;
//   upc = upc / 100;
//   n5 = upc % 10;
//   n4 = upc % 100 / 10;
//   upc = upc / 100;
//   n3 = upc % 10;
//   n2 = upc % 100 / 10;
//   n1 = upc / 100;
//   printf("%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n", upc, n11, n10,
//   n9, n8, n7, n6, n5, n4, n2, n3);
//   // n1 = upc;
//   // n2 = n11;
//   // n3 = n10;
//   // n4 = n9;
//   // n5 = n8;
//   // n6 = n7;
//   // n7 = n6;
//   // n8 = n5;
//   // n9 = n4;
//   // n10 = n2;
//   // n11 = n3;

//   sum1 = n1 + n3 + n5 + n7 + n9 + n11;
//   sum2 = n2 + n4 + n6 + n8 + n10;
//   // result_digit = 9 - ((((sum1 * 3) + sum2) - 1) % 10);
//   // printf("First: Check digit: %d\n", result_digit);
//   result_digit = (10 - (((sum1 * 3) + sum2) % 10)) % 10;

//   // printf("%d%d%d%d%d%d%d%d%d%d%d\n", n1, n2, n3, n4, n5, n6, n7, n8, n9,
//   n10, n11);

//   printf("Check digit: %d\n", result_digit);
// }

// int main(void) {
//   int ean, n1, n2, n3, n4, n5, n6, n7, n8, n9, n10, n11, n12, sum1, sum2,
//       result_digit;

//   printf("Enter the first 12 digits of an EAN: ");
//   scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &n1, &n2, &n3, &n4, &n5, &n6, &n7, &n8, &n9,
//         &n10, &n11, &n12);

//   sum1 = n2 + n4 + n6 + n8 + n10 + n12;
//   sum2 = n1 + n3 + n5 + n7 + n9 + n11;
//   // result_digit = 9 - ((((sum1 * 3) + sum2) - 1) % 10);
//   // printf("First: Check digit: %d\n", result_digit);
//   result_digit = (10 - (((sum1 * 3) + sum2) % 10)) % 10;

//   printf("%d%d%d%d%d%d%d%d%d%d%d%d\n", n1, n2, n3, n4, n5, n6, n7, n8, n9, n10,
//          n11, n12);

//   printf("Check digit: %d\n", result_digit);
// }
