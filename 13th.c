// Write a program to find the reverse of a number using recursion.

#include<stdio.h>

// Prototype
int reverse_number(int, int);

int main(){
    int num, reverse_num; // Initialization of variables

    printf("Enter number: ");
    scanf("%d", &num); // Inputing value

    reverse_num = reverse_number(num, 0); // Reversing number by calling reverseFunction

    printf("Reverse number is: %d", reverse_num); // Output

    return 0;
}

int reverse_number(int number, int rev){
    if(number == 0) return rev; // If number become 0, then return reverse number
    else return reverse_number(number / 10, rev*10 + number%10); // Add the last digit to reversed number
}