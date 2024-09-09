#include <stdio.h> // Include standard input/output library

// Write a C program to calculate volume of a cylinder.

int main() 
{
    float pi = 3.14;   // Define the value of pi
    float radius, height; // Declare variables for radius and height

    // Prompt the user to enter the radius of the cylinder
    printf("Enter radius = ");
    // Read the radius from user input
    scanf("%f", &radius);
    
    // Prompt the user to enter the height of the cylinder
    printf("Enter height = ");
    // Read the height from user input
    scanf("%f", &height);
    
    // Calculate the volume of the cylinder
    float volume = pi * (radius * radius) * height;
    
    // Print the volume of the cylinder
    printf("The volume of a cylinder is %f\n", volume);
    
    // Return 0 to indicate successful execution
    return 0;
}
