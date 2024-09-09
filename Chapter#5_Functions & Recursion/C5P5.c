#include <stdio.h>

// What will the following line produce in a C program:

int main()
{
    int a = 4;  // Initialize `a` with the value 4

    // Print the value of `a`, pre-incremented `a`, and post-incremented `a`
    // The order of evaluation of these expressions is not defined, leading to undefined behavior
    printf("%d %d %d\n", a, ++a, a++);

    return 0;
}