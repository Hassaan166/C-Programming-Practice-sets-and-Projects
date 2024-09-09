#include <stdio.h>

/*

Quick Quiz: Write a program with three functions
1. Good morning function which prints “good morning”.
2. Good afternoon function which prints “good afternoon”.
3. Good night function which prints “good night”.
main() should call all of these in order 1→2→3

*/

// Function prototypes
void good_morning();
void good_afternoon();
void good_night();

// Function to print "good morning"
void good_morning()
{
    printf("good morning\n");
}

// Function to print "good afternoon"
void good_afternoon()
{
    printf("good afternoon\n");
}

// Function to print "good night"
void good_night()
{
    printf("good night\n");
}

int main()
{
    // Call functions in the order: good morning, good afternoon, good night
    good_morning();
    good_afternoon();
    good_night();
    return 0;
}
