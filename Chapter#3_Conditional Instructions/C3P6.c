#include <stdio.h> // Include standard input/output library

// Write a program to find the greatest of four numbers entered by the user.

int main() 
{
    float first_num, second_num, third_num, fourth_num; // Declare variables for four numbers

    // Prompt the user to enter four numbers
    printf("Enter 1st Number = ");
    scanf("%f", &first_num);
    printf("Enter 2nd Number = ");
    scanf("%f", &second_num);
    printf("Enter 3rd Number = ");
    scanf("%f", &third_num);
    printf("Enter 4th Number = ");
    scanf("%f", &fourth_num);

    // Determine the greatest of the four numbers
    if (first_num >= second_num && first_num >= third_num && first_num >= fourth_num)
    {
        // The first number is the greatest
        printf("The 1st number entered by the user is the greatest of four numbers!\n");
    }
    else if (second_num >= first_num && second_num >= third_num && second_num >= fourth_num)
    {
        // The second number is the greatest
        printf("The 2nd number entered by the user is the greatest of four numbers!\n");
    }
    else if (third_num >= first_num && third_num >= second_num && third_num >= fourth_num)
    {
        // The third number is the greatest
        printf("The 3rd number entered by the user is the greatest of four numbers!\n");
    }
    else if (fourth_num >= first_num && fourth_num >= second_num && fourth_num >= third_num)
    {
        // The fourth number is the greatest
        printf("The 4th number entered by the user is the greatest of four numbers!\n");
    }

    // Return 0 to indicate successful execution
    return 0;
}
