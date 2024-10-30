// Write a program to generate Fibonacci series using recursion.

#include <stdio.h>

//Prototype
int fabonacii(int);

int main()
{
    int num, i = 1; // Initialization

    printf("Enter the value of num: ");
    scanf("%d", &num); // Getting input

    if (num < 0) // Checking num is negative or not
    {
        printf("Value cannot be negative");
        return 0; // Exiting from program
    }

    printf("Fabonacci series: ");

    while (i <= num)
    {
        printf("%d", fabonacii(i)); // Printing fabonacii series
        printf(" ");
        i++; // Updating value of i
    }

    return 0;
}

int fabonacii(int num)
{
    if (num == 1 || num == 2) return num - 1; // Basic statement for value of num = 1 or 2
    else return fabonacii(num - 1) + fabonacii(num - 2); // Recursive statement
}