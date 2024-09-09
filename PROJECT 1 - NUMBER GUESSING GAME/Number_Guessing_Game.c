#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // Seed the random number generator with the current time
    srand(time(0));

    int random_number, input_number, n;
    int i = 1;

    // Loop to ensure the maximum limit (n) is valid
    while (1)
    {
        printf("Enter the maximum limit (n) for the random number range from 1 to n = ");
        scanf("%d", &n);

        // Check if the entered limit is less than or equal to 1
        if (n <= 1)
        {
            printf("Invalid range: You cannot enter number less than or equal to 1.\n");
        }
        else
        {
            break;
        }
    }

    // Generate a random number between 1 and n
    random_number = (rand() % n) + 1;

    // Loop to prompt user for guesses until the correct number is guessed
    while (1)
    {
        printf("Enter any number between 1 to %d = ", n);
        scanf("%d", &input_number);

        // Check if the entered number is less than 1
        if (input_number < 1)
        {
            printf("Invalid input: Enter number between 1 to %d\n", n);
        }
        // Check if the entered number is greater than the random number
        else if (input_number > random_number)
        {
            printf("Lower number please\n");
        }
        // Check if the entered number is less than the random number
        else if (input_number < random_number)
        {
            printf("Higher number please\n");
        }
        else
        {
            // Correct number guessed
            printf("Congratulations! You guessed the correct number.\n");
            break;
        }

        // Increment the number of guesses
        i = i + 1;
    }

    // Print the total number of guesses used
    printf("The number of guesses the player used to arrive at the correct number are %d.\n", i);
    return 0;
}
