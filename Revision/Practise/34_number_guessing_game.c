#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void userInputRange(int *n1, int *n2)
{
    printf("Enter a first range: ");
    scanf("%d", n1);

    printf("Enter a last range: ");
    scanf("%d", n2);
}

int generateRandom()
{
    int min, max;
    userInputRange(&min, &max);
    if (min > max)
    {
        int temp = min;
        min = max;
        max = temp;
    }
    srand(time(0));
    int randomNumber = (rand() % (max - min + 1)) + min;
    return randomNumber;
}

void checkGuess(int randNum)
{
    int guess, noOfGuess = 1, attempt;
    printf("Enter number of attempt: ");
    scanf("%d", &attempt);
    do
    {
        printf("Guess a number between the range that u enter: ");
        scanf("%d", &guess);
        if (guess > randNum)
        {
            printf("Tooo High, Please Enter Lower Number!\n");
        }
        else if (randNum > guess)
        {
            printf("Tooo Low, Please Enter Higher Number!\n");
        }
        else
        {
            printf("Congratulation you guessed correct number in %d attempts\n", noOfGuess);
        }

        noOfGuess++;

        printf("\nYour attempts are over!!\n");
        printf("You couldn't guess the correct number. Try Again.\n");
        printf("The correct number was: %d\n", randNum);
        break;

    } while (guess != randNum && noOfGuess < attempt);
}

int main()
{
    checkGuess(generateRandom());
    return 0;
}
