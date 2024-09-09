#include <stdio.h> // Include standard input/output library

/*
   This program calculates the income tax paid by an employee
   to the government based on the following tax slabs:

   Income Slabs:
   - Income below 2.5 lakhs: No tax
   - Income between 2.5 lakhs and 5.0 lakhs: 5% tax on the amount exceeding 2.5 lakhs
   - Income between 5.0 lakhs and 10.0 lakhs: 20% tax on the amount exceeding 5.0 lakhs
   - Income above 10.0 lakhs: 30% tax on the amount exceeding 10.0 lakhs

   The program takes the total income amount as input from the user
   and calculates the tax based on the slabs.
*/

int main() 
{
    float income_amount; // Declare variable for income amount
    float Tax; // Declare variable for tax amount

    // Prompt the user to enter the income amount
    printf("Enter Income Amount in lacs = ");
    // Read the income amount from user input
    scanf("%f", &income_amount); // Enter Amount up to 1 decimal place
    
    // Calculate tax based on income slabs
    if (income_amount <= 2.5)
    {
        // No tax for income below 2.5 lakhs
        Tax = 0;
        printf("Your Tax Amount is %.3f\n", Tax);
        printf("Tax is not applicable to you!\n");
    }
    else if (income_amount > 2.5 && income_amount <= 5.0)
    {
        // 5% tax on the amount exceeding 2.5 lakhs
        Tax = (income_amount - 2.5) * 0.05;
        printf("Your Tax Amount is %.3f\n", Tax);
        printf("This Employee paid %.3f tax amount to the government as per the given slabs\n", Tax);
    }
    else if (income_amount > 5.0 && income_amount <= 10.0)
    {
        // 5% tax on the amount between 2.5 and 5.0 lakhs
        // 20% tax on the amount exceeding 5.0 lakhs
        Tax = 0 + ((5.0 - 2.5) * 0.05) + ((income_amount - 5.0) * 0.2);
        printf("Your Tax Amount is %.3f\n", Tax);
        printf("This Employee paid %.3f tax amount to the government as per the given slabs\n", Tax);
    }
    else
    {
        // 5% tax on the amount between 2.5 and 5.0 lakhs
        // 20% tax on the amount between 5.0 and 10.0 lakhs
        // 30% tax on the amount exceeding 10.0 lakhs
        Tax = 0 + ((5.0 - 2.5) * 0.05) + ((10.0 - 5.0) * 0.2) + ((income_amount - 10.0) * 0.3);
        printf("Your Tax Amount is %.3f\n", Tax);
        printf("This Employee paid %.3f tax amount to the government as per the given slabs\n", Tax);
    }
    
    // Return 0 to indicate successful execution
    return 0;
}
