#include <stdio.h>

/*
Write a program to calculate the sum of the numbers occurring in the
multiplication table of 8. (consider 8 x 1 to 8 x 10).
*/

int main()
{
    int n, result, x;
    int sum = 0;

    // Prompt user for input
    printf("Enter number whose multiplication table you want to print = ");
    scanf("%d", &n);
    printf("Enter number upto where the multiplication table you want = ");
    scanf("%d", &x);

    // Loop through the multiplication table and calculate sum
    for (int i = 1; i <= x; i++)
    {
        result = n * i;
        sum = sum + result;
        printf("%d x %d = %d\n", n, i, result);  // Print each multiplication step
    }

    // Display the final sum
    printf("The sum of the numbers occurring in the multiplication table of %d is %d!\n", n, sum);

    return 0;
}
