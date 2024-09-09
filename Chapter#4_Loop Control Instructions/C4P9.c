#include <stdio.h>

// Program to calculate the factorial of a given number using a while loop.

int main()
{
    int n;
    int i = 1;
    printf("Enter number whose factorial you want to calculate = ");
    scanf("%d", &n);

    int factorial = 1;

    // Calculate factorial using a while loop
    while (i <= n)
    {
        factorial = factorial * i;
        i = i + 1;
    }

    // Display the result
    printf("The factorial of %d is %d!\n", n, factorial);
    return 0;
}
