#include <stdio.h> // Include standard input/output library

// Write a C program to calculate area of a circle.

int main() 
{
    float pi = 3.14; // Define the value of pi
    float radius;    // Declare a variable for the radius

    // Prompt the user to enter the radius of the circle
    printf("Enter radius = ");
    // Read the radius from user input
    scanf("%f", &radius);
    
    // Calculate the area of the circle
    float area = pi * radius * radius;
    
    // Print the area of the circle
    printf("The area of a circle is %f\n", area);
    
    // Return 0 to indicate successful execution
    return 0;
}
