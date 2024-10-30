// Consider the below series:
// 0, 0, 2, 1, 4, 2, 6, 3, 8, 4, 10, 5, 12, 6, 14, 7, 16, 8
// This series is a mixture of 2 series all the odd terms in this series form even numbers in ascending order and every even term is derived from the previous term using the formula (n/2). Write a program to find the nth term in this series.

#include <stdio.h>

int main()
{
    int n, i = 1, even_term = 0, odd_term = 0; // Initialization of variables

    printf("Enter the value of n: ");
    scanf("%d", &n); // Getting input

    if (n <= 0)
    { // Checking if n is positive or not
        printf("n cannot be negative or zero");
        return 0; // Returning if n is negative
    }

    while (i + 1 <= n) // Using loop untill i == n
    {
        if (!(i % 2 == 0))
        {                  // Run if i is odd
            odd_term += 2; // Updating odd term
        }
        else
        {                             // Run if i is even
            even_term = odd_term / 2; // Updating the even term
        }

        i++; // Updating value of i to make finite loop
    }

    // Printing term according to the n
    if (n % 2 == 0)
        printf("The nth term is: %d", even_term); // if n is even
    else
        printf("THe nth term is: %d", odd_term); // if n is odd

    return 0;
}