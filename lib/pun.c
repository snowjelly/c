#include <stdio.h>

/*********************************************************************
 * Name: Experiments, projects, and exercises in C Fundamentals      *
 * Description: Learning C using some book I pirated online for free *
 * Author: Connor Broadwell                                          *
 * Purpose: Learning                                                 *
 *********************************************************************/

// #include <"pun.h"> || <pun.h> depending if linked from somewhere else
// inside <pun.h>
// int height;
// ...
// LSP says not to do that lol (?)

int main(void) {
  /* IDK if its idiomatic in C code.
   Aparrently this was C99 standard, not an original thing
   The original way was to declare the var on an other line
   then instantiate, bind, or assign it to a value
   (depending on the word they teach u for that language,
   but its usually the same thing more or less)
   i.e:
   int height;
   height = 8;
  */

  int height = 8;
  int length = 12;
  int width = 10;
  int volume = height * length * width;
  float profit = 2150.48f;

  printf("Brevity is the soul of wit.\n  --Shakespeare\n");
  printf("Height: %d\nWidth: %d\n", height, width);
  printf("Profit: %f\nProfit_2_digits: %.2f\n", profit, profit);
  // when printing %d is for printing ints
  // %f is for floats
  return 0;
}

