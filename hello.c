#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void guess(int N)
{
    int number, guess, numberofguess = 0;
    srand(time(NULL));
    number = rand() % N;

    printf("Guess a number between 1 and %d:", N);

    do
    {
        if (numberofguess > 9)
        {
            printf("\nYou lose! The correct number was %d.\n", number);
            break;
        }

        scanf("%d", &guess);

        if (guess > number)
        {
            printf("Lower number, please!\n");
            numberofguess++;
        }
        else if (number > guess)
        {
            printf("Higher number, please!\n");
            numberofguess++;
        }
        else
        {
            printf("Congratulations! You guessed the number in %d attempts.\n", numberofguess);
        }
    } while (guess != number);
}

int main()
{
    int N = 20;
    guess(N);
    return 0;
}
