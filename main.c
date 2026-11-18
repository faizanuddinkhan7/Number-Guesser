#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  int secret_number;
  int guess;
  int attempts;

  srand(time(NULL));

  secret_number = (rand() % 100 ) + 1;

  printf("Welcome to the Number Guessing Game!\n");
  printf("Choose a number between 1 and 100.\n");

  do {
    printf("\nEnter your guess: ");
    scanf("%d", &guess);
    attempts++;

    if (guess > secret_number) {
      printf("Too high! Try again.\n");
      printf("You have %d attempts left!\n", 10 - attempts);

    } else if (guess < secret_number) {
      printf("Too low! Try again.\n");
      printf("You have %d attempts left!\n", 10 - attempts);

    } else {
      printf("\nCongrats! You guessed it in %d attempts.\n", attempts);
    }
  } while (guess != secret_number && attempts < 10);

    return 0;
  }
