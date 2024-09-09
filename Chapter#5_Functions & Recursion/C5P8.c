#include <stdio.h>

/*

Write a program using function to print the following pattern :

*****
***
*

*/

// Function prototype
void pattern_print(int);

// Function to print the pattern
void pattern_print(int n)
{
    char asterick = '*';  // Character to be used in the pattern
    // Loop through the number of lines
    for (int i = n; i; i--)
    {
        // Print decreasing number of '*' in each line
        for (int j = (2 * i) - 1; j; j--)
        {
            printf("%c", asterick);
        }
        // Move to the next line
        printf("\n");
    }
}

int main()
{
    int lines;
    // Prompt the user to enter the number of lines
    printf("Enter number of lines where you want to print the pattern = ");
    scanf("%d", &lines);
    // Call the function to print the pattern
    pattern_print(lines);
    return 0;
}
