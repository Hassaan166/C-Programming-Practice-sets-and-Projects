#include <stdio.h>

// Function prototype for average calculator
float avg_calculator(float, float, float);

// Function definition to calculate the average of three numbers
float avg_calculator(float a, float b, float c)
{
    float avg;
    avg = (a + b + c) / 3; // Calculate the average
    return avg; // Return the calculated average
}

int main()
{
    float a, b, c, result; // Variables to store input numbers and result
    printf("Enter a = ");
    scanf("%f", &a); // Read the first number
    printf("Enter b = ");
    scanf("%f", &b); // Read the second number
    printf("Enter c = ");
    scanf("%f", &c); // Read the third number

    result = avg_calculator(a, b, c); // Call the function to calculate average

    printf("The average of three numbers is %.2f\n", result); // Print the result

    return 0; // Exit the program
}
