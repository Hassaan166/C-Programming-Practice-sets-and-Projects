Number Guessing Game

Problem Statement:
Write a program that generates a random number and asks the player to guess it. If the player’s guess is higher than the actual number, the program displays “Lower number please”. Similarly, if the user’s guess is too low, the program prints “Higher number please”. When the user guesses the correct number, the program displays the number of guesses the player used to arrive at the number.

Hint: Use a loop and a random number generator.

Explanation:

This program implements a number guessing game. It generates a random number within a user-defined range and prompts the user to guess this number. The program provides feedback if the guess is too high or too low, and it counts the number of guesses. When the user correctly guesses the number, the program displays the total number of attempts.

Program Overview:

Initialization and Setup:
The program starts by initializing the random number generator using the current time. This ensures that each run generates a different sequence of random numbers.

User Input for Range:
The user is asked to provide the maximum limit for the range of random numbers. The program validates this input to ensure it's greater than 1.

Generate Random Number:
A random number is generated within the user-specified range. This number is the target the user needs to guess.

Guessing Process:
The user is prompted to guess the number. For each guess, the program provides feedback:
 If the guess is less than the target number, the program  suggests a higher number.
 If the guess is more than the target number, it suggests a  lower number.
 If the guess is correct, the program congratulates the user  and exits the guessing loop.

Count and Display Guesses:
The program counts how many guesses the user made and displays this number once the correct guess is made.

How to Use:
Run the Program: Start the program and enter the maximum limit for the random number range.
Guess the Number: Follow the prompts to guess the number until you guess correctly.
Receive Feedback: Based on your guess, the program will tell you whether to guess higher or lower.
See Results: Once you guess the number correctly, the program will show the number of guesses you made.

Key Features:
Random Number Generation: Uses a seed based on the current time to ensure a different number each time the program runs.
User Input Validation: Ensures the user inputs a valid range and guesses within the specified bounds.
Guess Feedback: Provides clear instructions to help the user guess the number.
Guess Count: Keeps track of the number of guesses and displays it after the game ends.