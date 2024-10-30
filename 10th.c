// Write a program to print the given patterns:
// A
// B C
// D E F
// G H I J
// K L M N O

#include <stdio.h>

int main()
{
    int n, ch = 'A'; // Initialization

    printf("Enter value of n: ");
    scanf("%d", &n); // Inputing value

    for (int i = 1; i <= n; i++) // Running loop till i = 1 to n times
    {
        for (int j = 1; j <= i; j++) // Running loop till j = 1 to i times
        {
            if (ch == 'Z' + 1)
                ch = 'A';     // Checking if ch is greater than Z to change its value again to A
            printf("%c", ch); // Printing ch
            printf(" ");
            ch++; // Updating value of ch
        }

        printf("\n"); // new line character
    }

    return 0;
}