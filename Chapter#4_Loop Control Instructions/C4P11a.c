#include <stdio.h>

// Write a program to check whether a given number is prime or not using a do-while loop.

int main()
{
    int n, x;
    int prime = 1; // Assume the number is prime initially
    int i = 1; // Start checking from 1
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

    do
    {
        // Skip the checks for 1 and the number itself
        if (i == 1 || i == n)
        {
            i = i + 1; // Move to the next number
            continue; // Skip the current iteration
        }
        // Check if n is divisible by i
        else if (n % i == 0)
        {
            prime = 0; // Not a prime number
            break; // Exit the loop
        }
        i = i + 1; // Move to the next number

    } while (i <= x); // Continue until i exceeds x

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
