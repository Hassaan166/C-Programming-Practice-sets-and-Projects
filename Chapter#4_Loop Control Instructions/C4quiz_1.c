#include <stdio.h>

/*
Write a program to print natural numbers from 10 to 20 when initial loop
counter is initialized to 0.
*/

int main()
{
    int i = 0; // Initialize loop counter to 0
    while (i <= 20) // Continue the loop until i is 20
    {
        // Print numbers only when i is between 10 and 20 inclusive
        if (i >= 10)
        {
            printf("%d\n", i); // Print the current number
        }
        i = i + 1; // Increment loop counter
    }
    return 0;
}
