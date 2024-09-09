#include <stdio.h>

// Write a program to print first ‘n’ natural numbers using a for loop.

int main()
{
    int n; // Variable to store the value of 'n'
    printf("Enter n = ");
    scanf("%d", &n); // Read the value of 'n' from the user
    
    // Print numbers from 1 to n using a for loop
    for (int i = 1; i <= n; i++)
    {
        printf("%d\n", i); // Print the current number
    }
    
    return 0;
}
