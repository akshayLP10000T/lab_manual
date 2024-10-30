// Write a user-defined function to create a game where a player will get a chance to input three numbers from the keyboard with his eyes closed. Check if the sum of the input numbers is odd or even. If the sum is even, then ask him to play again, and for every chance, give one point. If he can score three points (continuous three times got even sum), declare him winner and print "You Won" otherwise print "You Lost". Print the result in main.

#include <stdio.h>

// Prototype of function
int game();

int main()
{

    int result = game(); // Calling function and getting its return value

    // Checking result
    if (result)
        printf("You won");
    else
        printf("You lose");

    return 0;
}

// Function declaration
int game()
{
    int sum, i = 1, value; // Variables

    while (i <= 3) // To run code within loop three times
    {
        printf("Enter the number: ");
        scanf("%d", &value); // Reading value

        sum += value; // Adding value for further execution

        i++; // Updating value
    }

    if (sum % 2 == 0)
        return 1; // Returning 1 if the sum is even as user won
    else
        return 0; // otherwise return 0
}