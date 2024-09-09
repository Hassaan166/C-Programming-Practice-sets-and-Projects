#include <stdio.h>

/*
Write a function to calculate the force of attraction on a body of mass ‘m’ exerted by
earth. Consider g = 9.8 m/s^2.
*/

// Function prototype to calculate force of attraction
float force_of_attraction(float);

// Function definition to calculate force of attraction using the formula F = m * g
float force_of_attraction(float m)
{
    float F;
    F = m * 9.8; // Calculate the force of attraction
    return F; // Return the calculated force
}

int main()
{
    float mass, Force; // Variables to store mass and calculated force
    printf("Enter mass of a body = ");
    scanf("%f", &mass); // Read the mass of the body

    Force = force_of_attraction(mass); // Call the function to calculate force of attraction

    printf("The force of attraction is %.2f\n", Force); // Print the calculated force

    return 0; // Exit the program
}
