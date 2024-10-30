// Mr. X’s basic salary is input through the keyboard. If the basic salary exceeds 50000, his dearness allowance is 30% of the basic salary, and the house rent allowance is 15% of basic salary otherwise his dearness allowance is 20% of the basic salary, and the house rent allowance is 10% of basic salary. Write a program to calculate his gross salary.

#include <stdio.h>

int main()
{
    float basic_salary, dearness, rent, gross_salary; // Initialization of variables

    printf("Enter your basic salary: ");
    scanf("%f", &basic_salary); // Inputing salary

    if (basic_salary > 50000)
    {
        dearness = 0.3 * basic_salary; // 30 percent of basic salary
        rent = 0.15 * basic_salary;    // 15 percent of basic saralary
    }
    else
    {
        dearness = 0.2 * basic_salary; // 20 percent of basic salary
        rent = 0.1 * basic_salary;     // 10 percent of basic salary
    }

    gross_salary = basic_salary + dearness + rent; // Calculating gross salary

    printf("Your gross salary is: %.2f", gross_salary); // Printing gross salary

    return 0;
}