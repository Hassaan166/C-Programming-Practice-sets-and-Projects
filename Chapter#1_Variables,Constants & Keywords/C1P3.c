#include <stdio.h> // Include standard input/output library

/*
Write a program to convert Celsius (Centigrade) degrees temperature to
Fahrenheit.
*/

int main() 
{
    float temp_C, temp_F; // Declare variables for temperature in Celsius and Fahrenheit

    // Prompt the user to enter the temperature in Celsius
    printf("Enter Temperature in Celsius = ");
    // Read the temperature in Celsius from user input
    scanf("%f", &temp_C);
    
    // Convert Celsius temperature to Fahrenheit
    temp_F = (temp_C * 1.8) + 32;
    
    // Print the temperature in Fahrenheit
    printf("Temperature in Fahrenheit is %f\n", temp_F);
    
    // Return 0 to indicate successful execution
    return 0;
}
