#include <stdio.h>

int main(void) {
  int i, j, k;

  printf("Exercise 1\n\n");

  i = 2; j = 3;
  k = i * j == 6;
  // prints 1 cuz its true
  printf("%d\n", k);

  i = 5; j = 10; k = 1;
  // prints 1
  printf("%d", k > i < j);

  i = 3; j = 2; k = 1;
  // prints 1
  printf("%d\n", i < j == j < k);

  i = 3; j = 4; k = 5;
  // prints 0 
  printf("%d\n", i % j + i < k);

  printf("Exercise 2\n\n");

  i = 10; j = 5;
  // prints 1 because ! returns 0 (false) or 1 (true) 
  printf("%d\n", !i < j);

  i = 2; j = 1;
  // prints 1
  printf("%d\n", !!i + !j);

  // prints 1
  // i think this prints true because any nonzero value including
  // negative numbers returns true
  i = 5; j = 0; k = -5;
  printf("%d\n", i && j || k);

  // prints 1
  i = 1; j = 2; k = 3;
  printf("%d\n", i < j || k);

  printf("\n\nExercise *3\n");

  // prints 1 3 4 5
  i = 3; j = 4; k = 5;
  printf("%d ", i < j || ++j < k);
  printf("%d %d %d\n", i, j, k);

  // prints 0 7 8 9
  i = 7; j = 8; k = 9;
  printf("%d ", i - 7 && j++ < k);
  printf("%d %d %d\n", i, j, k);

  // prints 1 8 8 9
  i = 7; j = 8; k = 9;
  printf("%d ", (i = j) || (j = k));
  printf("%d %d %d\n", i, j, k);

  
  // prints 1 2 1 1
  i = 1; j = 1; k = 1;
  printf("%d ", ++i || ++j && ++k);
  printf("%d %d %d\n", i, j, k);

  // nailed the star one. was easy lol, lets keep going

  printf("\n\nExercise *4\n");

  int result;
  
  // i is less than j
  // Expected: -1
  i = 5;
  j = 10;
  result = i < j ? -1 : i > j ? +1 : 0;
  printf("%d\n", result);


  // i is greater than j
  // Expected: 1
  i = 15;
  j = 7;
  result = i < j ? -1 : i > j ? +1 : 0;
  printf("%d\n", result);

  // i is equal to j
  // Expected: 0
  i = 3;
  j = 3;
  result = i < j ? -1 : i > j ? +1 : 0;
  printf("%d\n", result);

  
  printf("\n\nExercise *5\n");

  // legal and prints n is between 1 and 10
  int n = 10;
  if (n >= 1 <= 10)
    printf("n is between 1 and 10\n");

  
  printf("\n\nExercise *6\n");

  n = 5;
  // does nothing
  if (n == 1-10)
    printf("n is between 1 and 10\n");


  printf("\n\nExercise 7\n");


  i = 17;
  // prints 17
  printf("%d\n", i >= 0 ? i : -i);
  
  i = -17;
  // prints -17
  // wrong
  // answer: prints 17
  // apparently this works like math where itll inverse the
  // unary positive or negative sign
  printf("%d\n", i >= 0 ? i : -i);

  
  printf("\n\nExercise 8\n");

  int true = 1;
  int false = 0;
  int teenager;
  int age;

  if (age >= 13 && age <= 19) {
    teenager = true;
  } else {
    teenager = false;
  }


  
  printf("\n\nExercise 9\n");

  // yes but i dont like the boilerplate ur making me write
  // claude verified that i was correct. boilerplate avoided  

  printf("\n\nExercise *10\n");


  i = 1;
  // prints "onetwo"
  // no break; statements so it falls through
  switch (i % 3) {
    case 0: printf("zero");
    case 1: printf("one");
    case 2: printf("two");
  }

  printf("\n\nExercise 11\n");

  int area_code;
  printf("Enter Area Code: ");
  scanf("%d", &area_code);
  switch(area_code) {
    case 229: printf("Albany\n"); break;
    case 470:
    // OMITTED BREAK
    case 404: printf("Atlanta\n"); break;
    case 478: printf("Macon\n"); break;
    default: printf("Area code not recognized\n"); break;
  }
}

