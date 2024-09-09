#include <stdio.h> // Include standard input/output library

/*
Write a program to determine whether a character entered by the user is
lowercase or not.
*/

int main() 
{
    char character; // Declare variable for the character input
    int ascii_code; // Declare variable for the ASCII code of the character

    // Prompt the user to enter a character
    printf("Enter Character = ");
    // Read the character from user input
    scanf("%c", &character);
    
    // Convert the character to its ASCII code
    ascii_code = (int)character;
    // Print the ASCII code of the entered character
    printf("The ASCII Code for the given character is %d\n", ascii_code);
    
    // Check if the ASCII code corresponds to a lowercase letter
    if (ascii_code >= 97 && ascii_code <= 122)
    {
        // ASCII code for lowercase letters ranges from 97 to 122
        printf("The Character entered by the user is a lowercase!\n");
    }
    else
    {
        // Any other ASCII code does not correspond to a lowercase letter
        printf("The Character entered by the user is not a lowercase!\n");
    }
    
    // Return 0 to indicate successful execution
    return 0;
}
