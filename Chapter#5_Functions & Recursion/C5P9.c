#include <stdio.h>

/*

Write a program using function to print the following pattern (first n lines):
+
++
+++
++++
+++++

*/

// Function prototype
void pattern_print(int);

// Function to print the pattern
void pattern_print(int n)
{
    char plus = '+';  // Character to be used in the pattern
    // Loop through the number of lines
    for (int i = 1; i <= n; i++)
    {
        // Print the '+' character i times
        for (int j = 1; j <= i; j++)
        {
            printf("%c", plus);
        }
        // Move to the next line
        printf("\n");
    }
}

int main()
{
    int lines;
    // Prompt the user to enter the number of lines
    printf("Enter number of lines upto where you want to print the pattern = ");
    scanf("%d", &lines);
    // Call the function to print the pattern
    pattern_print(lines);
    return 0;
}
