#include <stdio.h> // Include standard input/output library

// What will be the output of this program given below:

int main() 
{
    int a = 10; // Initialize 'a' with the value 10
    
    // Check if 'a' is assigned the value 11 (note: '=' is assignment, not comparison)
    if (a = 11) 
    {
        // Since assignment always evaluates to true if the value is non-zero,
        // this block will always execute
        printf("I am 11\n");
    }
    else
    {
        // This block will not execute because the 'if' condition is always true
        printf("I am not 11\n");
    }
    
    // Return 0 to indicate successful execution
    return 0;
}
