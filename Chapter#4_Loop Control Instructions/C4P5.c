#include <stdio.h>

// Write a program to sum first n natural numbers using while loop.

int main()
{
    int n; // Variable to store the user input for the number of natural numbers to sum
    int sum = 0; // Initialize sum to 0
    int i = 1; // Initialize i to 1 (the first natural number)
    
    // Prompt the user to enter the value of n
    printf("Enter n = ");
    scanf("%d", &n);

    // While loop to sum natural numbers from 1 to n
    while (i <= n)
    {
        sum = sum + i; // Add i to sum
        i = i + 1; // Increment i by 1
    }

    // Output the sum of the first n natural numbers
    printf("The sum of first %d natural numbers is %d\n", n, sum);
    return 0;
}
