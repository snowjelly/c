#include <stdio.h>

int main(void) {
  int income;
  float tax, due;
  printf("Enter taxable income amount: ");
  scanf("%d", &income);
  if (!(income > 750)) {
    tax = 0.01f;
    due = tax * income;
  } else if (income <= 2250) {
    due = tax = 7.50 + 0.02 * income;
  } else if (income <= 3750) {
    due = 37.50 + 0.03 * income;
  } else if (income <= 5250) {
    due = 82.50 + 0.04 * income;
  } else if (income <= 7000) {
    due = 142.50 + 0.05 * income;
  } else {
    due = 230.00 + 0.06 * income;
  }
  printf("Tax due: $%.2f\n", due);
}
