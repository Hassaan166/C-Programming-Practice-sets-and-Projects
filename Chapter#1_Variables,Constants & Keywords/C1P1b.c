#include <stdio.h> // Include standard input/output library

/*
  Write a C program to calculate area of a rectangle
  by using inputs supplied by the user.
*/

int main() 
{
    int length, width, area; // Declare variables for length, width, and area

    // Prompt the user to enter the length of the rectangle
    printf("Enter length = ");
    // Read the length from user input
    scanf("%d", &length);
    
    // Prompt the user to enter the width of the rectangle
    printf("Enter width = ");
    // Read the width from user input
    scanf("%d", &width);
    
    // Calculate the area of the rectangle
    area = length * width;
    
    // Print the area of the rectangle
    printf("The area of rectangle is %d\n", area);
    
    // Return 0 to indicate successful execution
    return 0;
}
