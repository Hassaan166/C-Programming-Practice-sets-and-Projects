#include <stdio.h>

// Function prototype to convert Celsius to Fahrenheit
float temp_calculator(float);

// Function definition to convert Celsius temperature to Fahrenheit
float temp_calculator(float C_temp)
{
    float F_temp;
    F_temp = (C_temp * 1.8) + 32; // Convert Celsius to Fahrenheit using the formula
    return F_temp; // Return the calculated Fahrenheit temperature
}

int main()
{
    float temp_C, temp_F; // Variables to store Celsius and Fahrenheit temperatures
    printf("Enter temperature in Centigrade = ");
    scanf("%f", &temp_C); // Read the temperature in Celsius

    temp_F = temp_calculator(temp_C); // Call the function to convert Celsius to Fahrenheit

    printf("Temperature in Fahrenheit is %f\n", temp_F); // Print the converted temperature

    return 0; // Exit the program
}
