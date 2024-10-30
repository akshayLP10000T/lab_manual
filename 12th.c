// Write a user-defined function to check if a number is Armstrong or not using function.

#include <stdio.h>
#include <math.h>

// Function prototypes
int countDigit(int);
int isArmStrong(int);

int main()
{
    int number;

    printf("Enter number: ");
    scanf("%d", &number); // Reading numbers

    // Checking number is armstrong or not
    if (isArmStrong(number))
        printf("%d is armstrong number", number);
    else
        printf("%d is not a armstrong number", number);

    return 0;
}

// Count function declaration
int countDigit(int num)
{
    int digits = 0, originalNum = num; // Assuming digits are 0

    while (originalNum != 0) // Loop till num is 0
    {
        originalNum /= 10; // Removing last digit of number
        digits++;          // Increasing digit by 1
    }

    return digits; // Returning total number of digits
}

int isArmStrong(int num)
{
    float sum = 0, digit, originalNum = num;         // Initialization of variables
    float numberOfDigit = countDigit(originalNum); // Getting total digits in num by calling function

    while (num != 0)
    {
        digit = num % 10;                      // Getting last digit of number
        sum += (float)pow(digit, numberOfDigit); // Adding value to sum to check number is armstrong or not
        num /= 10;                             // removing last digit of number
    }

    return ((int)sum == originalNum); // Returning if number is armstrong or not
}