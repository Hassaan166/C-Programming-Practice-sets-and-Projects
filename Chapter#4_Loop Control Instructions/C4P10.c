#include <stdio.h>

// Write a program to check whether a given number is prime or not using a for loop.

int main()
{
    int n, x;
    int prime = 1; // Assume the number is prime initially
    printf("Enter number which you want to check = ");
    scanf("%d", &n);
    printf("Enter number upto where you want to check the divisibility of a given number = ");
    scanf("%d", &x);

    // Numbers less than 2 are not prime
    if (n < 2)
    {
        printf("The given number is not a prime number!\n");
        return 0;
    }

    // Check divisibility from 1 up to x
    for (int i = 1; i <= x; i++)
    {
        // Skip the checks for 1 and the number itself
        if (i == 1 || i == n)
        {
            continue;
        }
        // Check if n is divisible by i
        else if (n % i == 0)
        {
            prime = 0; // Not a prime number
            break; // Exit the loop
        }
    }

    // Output whether the number is prime or not
    if (prime == 0)
    {
        printf("The given number is not a prime number!\n");
    }
    else
    {
        printf("The given number is a prime number!\n");
    }

    return 0;
}
