#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int number, guess, attempts = 0, max_attempts = 7;

    srand(time(NULL));
    number = rand() % 100 + 1;  

    printf("I'm thinking of a number between 1 and 100.\n");
    printf("You have %d attempts to guess it!\n\n", max_attempts);

    while (attempts < max_attempts) {
        printf("Enter your guess: ");
        
        if (scanf("%d", &guess) != 1) {
            printf("Please enter a valid number.\n");
            while (getchar() != '\n');  
            continue;
        }

        attempts++;

        if (guess < number) {
            printf("Too low!\n");
        } else if (guess > number) {
            printf("Too high!\n");
        } else {
            printf("Correct! You guessed it in %d attempts.\n", attempts);
            return 0;
        }

        int remaining = max_attempts - attempts;
        if (remaining > 0) {
            printf("%d attempts left.\n\n", remaining);
        }
    }

    printf("\nGame over! The number was %d.\n", number);
    return 0;
}