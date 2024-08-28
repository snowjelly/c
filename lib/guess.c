#include <stdio.h>

void guessNumber(int guess) {
  int answer = 555;

  if (guess == answer) {
    printf("Correct. You guessed it!\n");
  } else if (guess < answer) {
    printf("Your guess is too low.\n");
  } else {
    printf("Your guess is too high.\n");
  }
}

int main() {
    guessNumber(500);
    guessNumber(600);
    guessNumber(555);
}
