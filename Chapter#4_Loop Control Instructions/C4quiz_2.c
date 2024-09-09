#include <stdio.h>

// Write a program to print first ‘n’ natural numbers using a do-while loop.

int main()
{
    int n; // Variable to store the value of 'n'
    int i = 1; // Initialize loop counter to 1
    printf("Enter n = ");
    scanf("%d", &n); // Read the value of 'n' from the user
    
    // Print numbers from 1 to n using a do-while loop
    do
    {
        printf("%d\n", i); // Print the current number
        i = i + 1; // Increment loop counter
    } while (i <= n); // Continue the loop until i is greater than n
    
    return 0;
}
