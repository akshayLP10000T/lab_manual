// Write a program to print the sum of given series: 1! + 2! + 3! + 4! + 5! ………………n!

#include <stdio.h>

// Function prototype
int factorial(int);

int main()
{
    int n, result = 0, i = 1; // Initialization of variable

    printf("Enter value of n: ");
    scanf("%d", &n); // Reading input

    if (n < 0)
    { // Checking n is negative or not
        printf("n cannot be negative");
        return 0; // Returning if n is negative
    }

    while (i <= n)
    {
        result += factorial(i); // Function calling and saving its value of variable
        i++;                    // Updating value of i
    }

    printf("Answer: %d", result); // Printing the result

    return 0;
}

// Function declaration
int factorial(int num)
{
    if (num == 0 || num == 1)
    {
        return 1;
    }
    else
    {
        return num * factorial(num - 1);
    }
}