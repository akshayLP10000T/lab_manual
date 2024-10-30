// Write a program to input a three-digit number and print it in words using switch case.
// Sample input: 256
// Output: Two Five Six

// prototype of printingDigit function
void printWord(int);

#include <stdio.h>

int main()
{
    int number, hundreds, tens, ones; // Initialization values

    printf("Enter the number: ");
    scanf("%d", &number); // Getting input

    if (number < 100 || number > 999)
    { // Checking if the number is three digit or not
        printf("Number should be three digit");
        return 0; // Returning here if number is not three digit
    }

    hundreds = number / 100;   // Getting first digit of number
    tens = (number / 10) % 10; // Getting second digit of number
    ones = number % 10;        // Getting last digit of number

    // function  calling for every digits
    printWord(hundreds);
    printWord(tens);
    printWord(ones);

    return 0;
}

void printWord(int a)
{

    // Printing the word according to the digit given
    switch (a)
    {
    case 0:
        printf("Zero ");
        break;
    case 1:
        printf("One ");
        break;
    case 2:
        printf("Two ");
        break;
    case 3:
        printf("Three ");
        break;
    case 4:
        printf("Four ");
        break;
    case 5:
        printf("Five ");
        break;
    case 6:
        printf("Six ");
        break;
    case 7:
        printf("Seven ");
        break;
    case 8:
        printf("Eight ");
        break;
    case 9:
        printf("Nine ");
        break;

    default:
        printf("Invalid Number");
        break;
    }
}