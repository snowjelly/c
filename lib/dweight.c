/* Computes the dimensional weight of a 12" x 10" x 8" box */

#include <stdio.h>

#define INCHES_PER_POUND 166

int main(void) {
  int height, length, width, volume, weight;

  printf("Enter Length: ");
  scanf("%d", &length);
  printf("Enter Width: ");
  scanf("%d", &width);
  printf("Enter Height: ");
  scanf("%d", &height);

  volume = height * length * width;
  weight = (volume + INCHES_PER_POUND - 1) / INCHES_PER_POUND;
  
  printf("Volume (cubic inches) : %d\n", volume);
  printf("Dimensional weight (pounds) : %d\n", weight);

  return 0;
}
