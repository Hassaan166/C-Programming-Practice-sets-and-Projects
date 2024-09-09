#include <stdio.h>

// Program to calculate the factorial of a given number using a for loop.

int main()
{
    int n;
    printf("Enter number whose factorial you want to calculate = ");
    scanf("%d", &n);

    int factorial = 1;

    // Calculate factorial using a for loop
    for (int i = 1; i <= n; i++)
    {
        factorial = factorial * i;
    }

    // Display the result
    printf("The factorial of %d is %d!\n", n, factorial);
    return 0;
}
