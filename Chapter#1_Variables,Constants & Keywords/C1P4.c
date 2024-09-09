#include <stdio.h> // Include standard input/output library

/*
Write a program to calculate simple interest for a set of values representing
principal, number of years, and rate of interest.
*/

int main() 
{
    float p_amount; // Declare variable for principal amount
    int t_period;   // Declare variable for time period in years
    float i_rate, Simp_interest; // Declare variables for interest rate and simple interest

    // Prompt the user to enter the principal amount
    printf("Enter Principal Amount = ");
    // Read the principal amount from user input
    scanf("%f", &p_amount);
    
    // Prompt the user to enter the interest rate
    printf("Enter Interest rate = ");
    // Read the interest rate from user input
    scanf("%f", &i_rate);
    
    // Prompt the user to enter the time period
    printf("Enter Time Period = ");
    // Read the time period from user input
    scanf("%d", &t_period);
    
    // Calculate the simple interest
    Simp_interest = (p_amount * i_rate * t_period) / 100;
    
    // Print the simple interest
    printf("The Simple interest is %f\n", Simp_interest);
    
    // Return 0 to indicate successful execution
    return 0;
}
