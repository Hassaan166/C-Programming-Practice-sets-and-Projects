#include <stdio.h>

// Function prototype to calculate nth element of Fibonacci series
int fibonacci(int);

// Function definition to calculate nth element of Fibonacci series using recursion
int fibonacci(int n)
{
    // Base case: the 0th element is 0
    if (n == 0)
    {
        return 0;
    }
    // Base case: the 1st element is 1
    else if (n == 1)
    {
        return 1;
    }
    // Recursive case: sum of the previous two elements
    else
    {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main()
{
    int element, Fibonacci;
    printf("Enter nth element which you want to find from Fibonacci series = ");
    scanf("%d", &element); 

    // Calculate the nth Fibonacci number; adjust for 0-based index
    Fibonacci = fibonacci(element - 1);

    // Print the nth Fibonacci number
    printf("The %dth element in Fibonacci series is %d!\n", element, Fibonacci);

    return 0; // Exit the program
}
