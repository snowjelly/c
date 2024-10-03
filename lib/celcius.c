#include <stdio.h>

/*
Subtract 32 from degrees Fahrenheit; Divide the result by 1.8 
*/

#define FREEZING_PT 32.0f
#define SCALE_FACTOR (5.0f / 9.0f)

int main(void) {
  float fahrenheit, celsius;

  printf("Enter Degrees Fahrenheit: ");
  scanf("%f", &fahrenheit);

  celsius = (fahrenheit - FREEZING_PT) * SCALE_FACTOR;

  printf("%.1f°F is %.1f°C", fahrenheit, celsius);
  
  return 0;
}
