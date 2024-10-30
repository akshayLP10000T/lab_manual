// Write a code to input a number and check if it is an Armstrong number or not? (number can have any number of digits)

#include <stdio.h>
#include <math.h>

int main()
{
    // Value initialization
    int num, digits = 0, originalNum = 0, lastDigit = 0;
    float sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num); // Inputing values

    originalNum = num; // Storing num value to other variable so it doesn't change the original num
    while (originalNum != 0)
    {
        originalNum /= 10; // Removing last digit of originalNum
        digits++;          // Increasing value of digit
    }

    originalNum = num; // Again storing value of num to originalNum

    while (originalNum != 0)
    {
        lastDigit = originalNum % 10; // Getting last digit of originalNum
        sum += (float)pow(lastDigit, digits);
        originalNum /= 10; // Removing last digit of originalNum
    }

    // Checking if sum is equal to num to check its armstrong number or not
    if ((int)sum == num)
        printf("%d is armstrong number", num);
    else
        printf("%d is not armstrong number", num);

    return 0;
}