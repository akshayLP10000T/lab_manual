// Write a menu-driven program to perform the following operations on a given number (integer) based on the given choices from (1 to 4):
// 1. Print factorial of the number
// 2. Print if the number is odd or even
// 3. Print reverse of the number
// 4. Exit

#include <stdio.h>

// Prototype of functions
int factorial(int);
int oddOrEven(int);
int reverse_num(int, int);

int main()
{
    int num, option; // Initialization of variables

    printf("Enter the value of num: ");
    scanf("%d", &num); // Inputing value

    while (1) // Infinite loop till user said to be active
    {
        printf("Select the operation using num keys:- \n");
        printf("1. Print factorial of number\n2. Print if the number is odd or even\n3. Print the reverse of number\n4. Exit\n\n");
        scanf("%d", &option);

        if (option == 1)
            printf("Factorial of num is: %d\n\n", factorial(num)); // To print factorial
        else if (option == 2)
        {
            int isEven = oddOrEven(num); // Calling oddOrEven function and storing its returning value

            if (isEven) // Checking num is Even or not
                printf("Even number\n\n");
            else
                printf("Odd number\n\n");
        }
        else if (option == 3)
            printf("Reverse of num is: %d\n\n", reverse_num(num, 0)); // Reversing a number
        else if (option == 4)
            break; // To exit the loop
        else
            printf("Invalid input\n\n");
    }

    return 0;
}

// Fuction to find factorial
int factorial(int num)
{
    if (num == 0 || num == 1)
        return 1; // Basic statement to return value 1 on num == 0 or 1
    else
        return num * factorial(num - 1); // Recursive statement to find factorial
}

// Fucntion for odd even number
int oddOrEven(int num)
{
    int isEven = 1; // Assuming the number is even

    if (num % 2 != 0) // Checking the number is divisible by 2 or not
        isEven = 0;   // If not isEven set to 0
    return isEven;    // Returning the value
}

// Function to reverse number
int reverse_num(int number, int rev)
{
    if (number == 0)
        return rev; // If number become 0, then return reverse number
    else
        return reverse_num(number / 10, rev * 10 + number % 10); // Add the last digit to reversed number
}