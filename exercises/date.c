#include <stdio.h>

int main(void) {
  int mm, dd, yyyy;

  printf("Enter a date (mm/dd/yyyy): ");
  scanf("%d/%d/%d", &mm, &dd, &yyyy);

  printf("You entered the date %d0%d%d\n", yyyy, mm, dd);
}
