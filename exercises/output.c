#include <stdio.h>

int main(void) {
  int i, j, k;

  i = 5;
  j = 3;
  // prints 1 2
  printf("%d %d\n", i / j, i % j);

  i = 2;
  j = 3;
  // prints 0
  printf("%d\n", (i + 10) % j);

  // wrong
  i = 7;
  j = 8;
  k = 9;
  // prints 0
  // answer is 1
  printf("%d\n", (i + 10) % k / j);
  // printf("%d\n", (i + (10 % k)) / j);
  // prints 1

  // wrong
  i = 1;
  j = 2;
  k = 3;
  // prints 1
  // answer is 0
  printf("%d\n", (i + 5) % (j + 2) / k);
  // i found the that answer is 0

  printf("\n\nExercise 3 \n");
  // in C89
  // 1
  printf("%d\n", 8 / 5);
  // -2
  // answer: -1
  printf("%d\n", -8 / 5);
  // -2
  // answer: -1
  printf("%d\n", 8 / -5);
  // 1
  printf("%d\n", -8 / -5);

  printf("\n\nExercise 4 \n");
  // in C99
  // 1
  printf("%d\n", 8 / 5);
  // -1
  printf("%d\n", -8 / 5);
  // -1
  printf("%d\n", 8 / -5);
  // 1
  printf("%d\n", -8 / -5);

  printf("\n\nExercise 5\n");
  // in c89
  // 3
  printf("%d\n", 8 % 5);
  // -3
  printf("%d\n", -8 % 5);
  // -3
  // answer: 3
  printf("%d\n", 8 % -5);
  // 3
  // answer: -3
  printf("%d\n", -8 % -5);

  // Exercise 7 answer:
  // the result will be different because subtracting one and then
  // performing a modulous operation will have a different effect
  // versus subtracting one after the modulous operation
  //

  printf("\n\nExercise 9\n");

  i = 7; j = 8;
  i *= j + 1;
  // prints: 63 8
  printf("%d %d\n", i, j);

  i = j = k = 1;
  i += j += k;
  // k = 1; j = 2; i = 3;
  // 3 2 1
  printf("%d %d %d\n", i, j, k);

  i = 1; j = 2; k = 3;
  i -= j -= k;
  // k = 3; j = -1; i = 2;
  // 2 -1 3
  printf("%d %d %d\n", i, j, k);

  i = 2; j = 1; k = 0;
  i *= j *= k;
  // k = 0; j = 0; i = 0;
  // 0 0 0
  printf("%d %d %d\n", i, j, k);

  printf("\n\nExcecise 10\n");

  i = 6;
  j = i += i;
  // 12 12
  printf("%d %d\n", i, j);

  i = 5;
  j = (i -= 2) + 1;
  // 3 4
  printf("%d %d\n", i, j);

  i = 7;
  j = 6 + (i = 2.5);
  // 2 8
  printf("%d %d\n", i, j);

  i = 2; j = 8;
  j = (i = 6) + (j = 3);
  // 6 9
  printf("%d %d\n", i, j);

  printf("\n\nExercise 11\n");

  i = 1;
  // 0 1
  // Expected: 0 2
  // obviously 2, minor mistake
  printf("%d ", i++ - 1);
  printf("%d\n", i);

  i = 10; j = 5;
  // 4 11 6
  printf("%d ", i++ - ++j);
  printf("%d %d\n", i, j);

  i = 7; j = 8;
  // 0 8 7
  printf("%d ", i++ - --j);
  printf("%d %d\n", i, j);

  i = 3; j = 4; k = 5;
  // 5 4 5 4
  // Expected: 3 4 5 4
  // figured it out: its 3 4 5 4
  // because there is no operand directly
  // to the left of the "-" sign its actually a negative sign
  // so its -j++
  // -j++ is -4 + -4
  // i++ (-j++) + (--k)
  // i+ (positive i) + (-j++) + (--k)
  // 3 + -4 + 4
  // 3 + 0
  // 3
  // thus
  // 3 4 5 4
  // once changing values to new assignments
  // (i++, j++) and reusing k's value of 4
  printf("%d ", i++ - j++ + --k);
  printf("%d %d %d\n", i, j, k);

  printf("\n\nExercise 12\n");

  i = 5;
  j = ++i * 3 - 2;
  // 6 16
  printf("%d %d\n", i, j);

  i = 5;
  j = 3 - 2 * i++;
  // 6 -7
  // Expected: -7
  // Math skill issue :skull:
  printf("%d %d\n", i, j);

  i = 7;
  j = 3 * i-- + 2;
  // 6 23
  printf("%d %d\n", i, j);

  i = 7;
  j = 3 + --i * 2;
  // 6 15
  printf("%d %d\n", i, j);

  // Exercise 13
  // ++i is exactly the same as i += 1
  // this is because it immediately performs the operation
  // instead of delaying it like the postfix operator

  // Exercise 14
  // (a * b) - (c * d) + e
  // (a / b) % (c / d)
  // (- a) - b + c - (+ d)
  // (a * - b) / (c - d)

  // Exercise 15
  // 3
  // i += j;
  // 1
  // i--;
  // 2
  // i * j / i;
  // 0
  // i % ++j;
}
