#include <stdio.h>

#define TAX_PERCENT 0.05f

int main(void) {
  float money;
  float money_tax;

  printf("Enter an amount: ");
  scanf("%f", &money);

  money_tax = (money * TAX_PERCENT) + money;

    
  printf("With tax added: $%.2f", money_tax);
}
