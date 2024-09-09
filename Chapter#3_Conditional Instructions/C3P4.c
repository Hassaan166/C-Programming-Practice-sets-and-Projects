#include <stdio.h> // Include standard input/output library

/*
Write a program to find whether a year entered by the user is a leap year or not.
Take year as an input from the user.
*/

int main() 
{
    int year; // Declare variable for the year

    // Prompt the user to enter a year
    printf("Enter Year = ");
    // Read the year from user input
    scanf("%d", &year);

    // Check if the year is a leap year
    if (year % 400 == 0)
    {
        // Year is divisible by 400, hence it's a leap year
        printf("The given year is a Leap Year!\n");
    }
    else if (year % 100 == 0)
    {
        // Year is divisible by 100 but not by 400, hence it's not a leap year
        printf("The given year is not a Leap Year!\n");
    }
    else if (year % 4 == 0)
    {
        // Year is divisible by 4 but not by 100, hence it's a leap year
        printf("The given year is a Leap Year!\n");
    }
    else
    {
        // Year is not divisible by 4, hence it's not a leap year
        printf("The given year is not a Leap Year!\n");
    }

    // Return 0 to indicate successful execution
    return 0;
}
