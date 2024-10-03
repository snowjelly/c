#include <stdio.h>
#include <math.h>

int main(void) {
  int radius;

  printf("What is radius of the sphere?: ");
  scanf("%d", &radius);
  
  float volume = (4.0f / 3.0f) * M_PI * (radius * radius * radius);
  printf("The volume is: %.2f\n", volume);
}
