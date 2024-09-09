#include <stdio.h>

// Write a program to print ‘n’ natural numbers in reverse order.

int main()
{
    int n; // Variable to store the value of 'n'
    printf("Enter n = ");
    scanf("%d", &n); // Read the value of 'n' from the user
    
    // Print numbers from n down to 1 using a for loop
    for (int i = n; i > 0; i--)
    {
        printf("%d\n", i); // Print the current number
    }
    
    return 0;
}
