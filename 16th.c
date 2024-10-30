// Develop a program to store the age of n students in a class using an array. Calculate the average age and find the count of all students above and below the average age. Print the higher count with an appropriate message.

#include<stdio.h>

int main(){
    // Initialization of variables
    int n, i=1, age, age_below = 0, age_above = 0;
    float sum = 0, avg;

    printf("Total number of students: ");
    scanf("%d", &n); // Inputing total number of students

    int ages[n]; // Initializing array of ages of length n

    while (i<=n) // Run n times
    {
        printf("Enter the age of %d student: ", i);
        scanf("%d", &age); // Inputing age

        ages[i] = age; // Adding value to array
        sum += age; // Sum of ages

        i++; // Updating value of i
    }

    avg = sum/n; // Average calculation

    printf("The average age of students is: %f\n", avg);

    i = 1; // Reinitialize i

    while (i<=n) // Run n times
    {
        if (ages[i] < avg) age_below++; // Checking age is below average
        else if (ages[i] > avg) age_above++; // Checking age is above average

        i++; // updating i
    }
    
    printf("The number of students having age below average: %d\n", age_below);
    printf("The number of students having age above average: %d\n", age_above);
    
}