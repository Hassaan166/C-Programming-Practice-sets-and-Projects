#include <stdio.h> // Include standard input/output library

// Write a program to print multiplication table of 10 in reversed order.

int main()
{
    int n, result, x; // Declare variables for number n, result, and limit x

    // Prompt the user to enter the number whose multiplication table is to be printed
    printf("Enter number whose multiplication table you want to print = ");
    scanf("%d", &n);

    // Prompt the user to enter the limit up to which the multiplication table should be printed
    printf("Enter number up to where the multiplication table you want = ");
    scanf("%d", &x);

    // Loop to print the multiplication table in reverse order starting from x down to 1
    for (int i = x; i; i--)
    {
        result = n * i; // Calculate the result of n * i
        // Print the multiplication in the format "n x i = result"
        printf("%d x %d = %d\n", n, i, result);
    }

    // Return 0 to indicate successful execution
    return 0;
}
