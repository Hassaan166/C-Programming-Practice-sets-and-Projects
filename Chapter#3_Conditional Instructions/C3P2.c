#include <stdio.h> // Include standard input/output library

/*
Write a program to determine whether a student has passed or failed. To pass, a
student requires a total of 40% and at least 33% in each subject. Assume there
are three subjects and take the marks as input from the user.
*/

int main() 
{
    float math, physics, computers; // Declare variables for marks in each subject
    float sum, tot_percent, math_per, phy_per, comp_per; // Declare variables for total, percentage, and individual subject percentages
    int total_marks = 300; // Total marks for three subjects (100 each)
    
    // Prompt the user to enter the obtained marks for each subject
    printf("Enter Math's Obtained_Marks out of 100 = ");
    scanf("%f", &math); // Read Math marks from user input
    
    printf("Enter Physics's Obtained_Marks out of 100 = ");
    scanf("%f", &physics); // Read Physics marks from user input
    
    printf("Enter Computer's Obtained_Marks out of 100 = ");
    scanf("%f", &computers); // Read Computer marks from user input
    
    // Calculate the total marks obtained
    sum = math + physics + computers;
    
    // Calculate the total percentage obtained
    tot_percent = (sum / total_marks) * 100;
    
    // Calculate the percentage for each subject
    math_per = (math / 100) * 100;
    phy_per = (physics / 100) * 100;
    comp_per = (computers / 100) * 100;
    
    // Check if the student meets the pass criteria
    if (tot_percent >= 40 && math_per >= 33 && phy_per >= 33 && comp_per >= 33)
    {
        // If all conditions are met, the student passes
        printf("You are Pass!\n");
    }
    else
    {
        // If any condition is not met, the student fails
        printf("You are Fail!\n");
    }
    
    // Return 0 to indicate successful execution
    return 0;
}
