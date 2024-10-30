// The following calculates value of f(x) if x has different ranges of value as below:

// F(x) = x² + 2 if 0 <= x <= 10
// F(x) = x² + 2x if 11 <= x <= 20
// F(x) = x³ + 2x² if 21 <= x <= 30
// F(x) = 0 if x > 30

#include <stdio.h>

int main()
{
    int x, result; // Initialization of variable

    printf("Enter the value of x: ");
    scanf("%d", &x);

    if (x < 0)
    { // Checking if x is negative
        printf("x cannot be negative\n");
        return 0; // Returning here if x is negative
    }
    // Changing value of result accoring to x
    else if (x >= 0 && x <= 10)
        result = x * x + 2;
    else if (x >= 11 && x <= 20)
        result = x * x + 2 * x;
    else if (x >= 21 && x <= 30)
        result = x * x * x + 2 * x * x;
    else
        result = 0;

    printf("The value of F(x) is: %d\n", result); // printing result

    return 0;
}