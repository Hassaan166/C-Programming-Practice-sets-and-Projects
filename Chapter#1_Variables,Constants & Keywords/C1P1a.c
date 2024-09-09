#include <stdio.h> // Include standard input/output library

/*
  Write a C program to calculate area of a rectangle
  by using hard coded inputs.
*/

int main() 
{
    int length = 2; // Define the length of the rectangle
    int width = 3;  // Define the width of the rectangle
    int area = length * width; // Calculate the area of the rectangle
    
    // Print the area of the rectangle
    printf("The area of rectangle is %d\n", area);
    
    // Return 0 to indicate successful execution
    return 0;
}
