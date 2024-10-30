// Write a program to print all the prime numbers between a given range p and q.

#include <stdio.h>
#include <math.h>

int main()
{
    int p, q; // Initialization of variable

    printf("Enter the value of p and q: ");
    scanf("%d %d", &p, &q); // Inputing values

    if (q <= p)
    { // Checking the limits
        printf("q should be greater than p");
        return 0; // Returning if q is greater than p
    }

    // Loop to solve every values between p and q
    while (p <= q)
    {
        int isPrime = 1;     // Assuming the current number is prime
        int limit = sqrt(p); // calculating square root of p for limit in for loop

        for (int i = 2; i <= limit; i++) // For checking p is divisible by any number from 2 to sqrt(p)
        {
            if (p % i == 0)
            { // If p is divisible, it's not prime
                isPrime = 0;
                break; // No need to check further
            }
        }

        if (isPrime)
        { // Printing if the number is prime
            printf("%d is prime number\n", p);
        }

        p++; // Updating value of p
    }

    return 0;
}