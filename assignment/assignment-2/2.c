#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int secret, guess, attempts = 0;
    srand(time(NULL));
    secret = rand() % 50 + 1;

    while(attempts < 5) {
        printf("Enter your guess (1-50): ");
        scanf("%d", &guess);
        attempts++;

        if(guess == secret) {
            printf("Congratulations! You guessed the right number in %d attempts\n", attempts);
            return 0;
        }
        else if(guess > secret)
            printf("Too high!\n");
        else
            printf("Too low!\n");
    }

    printf("Sorry, you've reached the maximum number of attempts. The secret number was %d\n", secret);
    return 0;
}
