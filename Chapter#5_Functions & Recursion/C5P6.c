#include <stdio.h>

// Recursive function to calculate the sum of first ‘n’ natural numbers.
int Sum(int);

int Sum(int n)
{
    // Base case: if n is 1, the sum is 1
    if (n == 1)
    {
        return 1;
    }
    // Recursive case: return the sum of (n-1) natural numbers plus n
    else
    {
        return Sum(n - 1) + n;
    }
}

int main()
{
    int num, result;

    // Loop to ensure valid input
    while (1)
    {
        printf("Enter number upto where you want to calculate the sum = ");
        scanf("%d", &num);

        // Check if the input number is valid (greater than or equal to 1)
        if (num < 1)
        {
            printf("Invalid number! Enter number greater or equal to 1.\n");
        }
        else
        {
            break;  // Exit the loop if the number is valid
        }
    }

    // Call the recursive function to calculate the sum
    result = Sum(num);
    // Print the result
    printf("The sum of first %d natural numbers is %d!\n", num, result);
    return 0;
}
