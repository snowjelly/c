#include <stdio.h>

int main(void) {
  
  // |    86,1040
  printf("%6d,%4d\n", 86, 1040);

  // |    30.25300|
  // idk how exponents work but the answer is
  // | 3.02530e+01|
  printf("%12.5e\n", 30.253);

  // |83.1620|
  printf("%.4f\n", 83.162);

  // |  0.00|
  // refer to line 9
  // answer: 1e-06
  printf("%-6.2g\n", .0000009979);


  // begin exercise 2
  printf("Exercise 2:\n\n");


  float z = 3.14;
  printf("%8.1e\n", z);
  printf("%-10.6e\n", z);
  printf("%8.3f\n", z);
  printf("%-6.0f\n", z);


  // begin exercise 3
  printf("Exercise 3:\n\n");


  // a "%d" == " %d"
  // b "%d-%d-%d" != "%d -%d -%d"
  // requires "-" but received " " instead

  // c "%f" == "%f "
  // d "%f,%f" == "%f, %f"

  
  // begin exercise 4
  printf("Exercise 4:\n\n");


  int i, j;
  float x, y;

  //  10, 5.0, 6
  // answer: 10, 0.300000, 5
  // becuz: looking for %d means digit/int so the decimal causes it to register
  // 10.3 as 10 and then 0.3 and then 5, adding 6 to the next call of scanf

  // scanf("%d%f%d", &i, &x, &j);
  // printf("%d\n%f\n%d\n", i, x, j);


  // begin exercise 5
  printf("Exercise 5:\n\n");

  // 12.300000 45 0.600000
  // floats/doubles/exponents (at least in format strings)
  // default to showing 6 numbers after the decimal
  scanf("%f%d%f", &x, &i, &y);
  printf("%f\n%d\n%f\n", x, i, y);
  
}
