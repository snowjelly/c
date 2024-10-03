#include <stdio.h>

int main(void) {
  int num, num_digits;
  printf("Enter a number: ");
  scanf("%d", &num);

  if (num < 10 && num >= 0) {
    num_digits = 1;
  } else if (num < 100 && num > 9) {
    num_digits = 2;
  } else if (num < 1000 && num > 99) {
    num_digits = 3;
  } else if (num < 10000 && num > 999) {
    num_digits = 4;
  }
  
  printf("The number %d has %d digits\n", num, num_digits);

}
