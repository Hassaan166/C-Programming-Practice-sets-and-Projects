#include <stdio.h>

// Write a program to sum first n natural numbers using for loop.

int main()
{
    int n; // Variable to store the user input for the number of natural numbers to sum
    int sum = 0; // Initialize sum to 0
    
    // Prompt the user to enter the value of n
    printf("Enter n = ");
    scanf("%d", &n);

    // For loop to sum natural numbers from 1 to n
    for (int i = 1; i <= n; i++)
    {
        sum = sum + i; // Add i to sum
    }

    // Output the sum of the first n natural numbers
    printf("The sum of first %d natural numbers is %d\n", n, sum);
    
    return 0;
}
