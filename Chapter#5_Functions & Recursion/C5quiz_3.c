#include <stdio.h>

// Function prototype for calculating factorial
int factorial(int);

// Recursive function to calculate factorial
int factorial(int n)
{
    // Base case: factorial of 0 or 1 is 1
    if (n == 0 || n == 1)
    {
        return 1;
    }
    // Recursive case: n * factorial of (n - 1)
    else
    {
        return n * factorial(n - 1);
    }
}

int main()
{
    int num, Factorial;

    // Prompt user to enter the number for which factorial is to be calculated
    printf("Enter number which factorial you want to find = ");
    scanf("%d", &num);

    // Call the factorial function and store the result
    Factorial = factorial(num);

    // Print the factorial of the given number
    printf("The Factorial of %d is %d!\n", num, Factorial);

    return 0;
}
