#include <stdio.h>

int main(void) {
  int hour_24_h, hour_24_m, hour_12_h, hour_24_mm;
  printf("Enter a 24-hour time: ");
  scanf("%d:%1d%1d", &hour_24_h, &hour_24_m, &hour_24_mm);

  if (hour_24_h == 24 || hour_24_h == 0) {
    hour_12_h = 12;
    printf("Equivalent 12-hour time: %d:%d%d AM\n", hour_12_h, hour_24_m, hour_24_mm);
  } else if (hour_24_h >= 13) {
    hour_12_h = hour_24_h - 12;
    printf("Equivalent 12-hour time: %d:%d%d PM\n", hour_12_h, hour_24_m, hour_24_mm);
  } else if (hour_24_h < 12) {
    printf("Equivalent 12-hour time: %d:%d%d AM\n", hour_24_h, hour_24_m, hour_24_mm);
  } else {
    hour_12_h = 12;
    printf("Equivalent 12-hour time: %d:%d%d PM\n", hour_12_h, hour_24_m, hour_24_mm);
  }
}
