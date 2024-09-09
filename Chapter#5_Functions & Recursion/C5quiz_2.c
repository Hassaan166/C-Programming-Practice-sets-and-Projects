#include <stdio.h>
#include <math.h>  // Include the math library for the pow() function

// Use the library function to calculate the area of a square with side a.

int main()
{
    float a, area;

    // Prompt user for the length of the side of the square
    printf("Enter length = ");
    scanf("%f", &a);

    // Calculate the area of the square using pow() function
    area = pow(a, 2);

    // Print the area of the square
    printf("The area of square is %.2f\n", area);

    return 0;
}
