#include <stdio.h>

/*
Write a program using function to print the following pattern (first n lines):
*
***
*****
*/

// Function prototype
void pattern_print(int);

// Function to print the pattern of asterisks
void pattern_print(int n)
{
    char asterick = '*';  // Character used for printing pattern
    // Loop through each line
    for (int i = 1; i <= n; i++)
    {
        // Print asterisks for the current line
        for (int j = 1; j <= (2 * i) - 1; j++)
        {
            printf("%c", asterick);
        }
        // Move to the next line after printing all asterisks for the current line
        printf("\n");
    }
}

int main()
{
    int lines;
    // Prompt user for the number of lines
    printf("Enter number of lines upto where you want to print the pattern = ");
    scanf("%d", &lines);
    // Call the function to print the pattern
    pattern_print(lines);
    return 0;
}
