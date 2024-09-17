#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main()
{
    int number;
    srand(time(0));
    number = rand() % 100 + 1; // Generate a random number between 1 and 100

    int guess, noOfGuesses = 1;

    do
    {
        printf("Guess the number(1-100):");
        scanf("%d", &guess);
        if (guess > number)
        {
            printf("Lower Number Please!\n");
        }
        else if (number > guess)
            printf("Higher Number Please!\n");

        else
            printf("You guessed in %d attempts\n", noOfGuesses);

        if (noOfGuesses > 10)
        {
            printf("\nYou lose! The correct number was %d.\n", number);
            break;
        }

        noOfGuesses++;
    } while (guess != number);
    return 0;
}
