#include <stdio.h> // Include standard input/output library

// Write a program to check whether a number is divisible by 97 or not.

int main() 
{
    int a, result; // Declare variables for the number and the remainder
    int b = 97;    // Define the divisor (97)

    // Prompt the user to enter a number
    printf("Enter a = ");
    // Read the number from user input
    scanf("%d", &a);
    
    // Calculate the remainder when 'a' is divided by 'b'
    result = a % b;
    
    // Print the remainder of the division
    printf("The remainder of %d & %d is %d\n", a, b, result);
    
    // Check if the remainder is zero
    if (result == 0)
    {
        // If remainder is zero, the number is divisible by 97
        printf("The Given number %d is divisible by %d\n", a, b);
    }
    else
    {
        // If remainder is not zero, the number is not divisible by 97
        printf("The Given number %d is not divisible by %d\n", a, b);
    }
    
    // Return 0 to indicate successful execution
    return 0;
}
