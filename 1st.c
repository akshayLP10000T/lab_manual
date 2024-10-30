// The length & breadth of a rectangle and radius of a circle are input through the keyboard. Write a program to calculate the area & perimeter of the rectangle, and the area & circumference of the circle.

#include <stdio.h>

int main()
{
    float length, breadth, radius; // Initialization of variables

    printf("Enter the values of length and breadth of rectangle: ");
    scanf("%f %f", &length, &breadth); // Reading length, breadth

    printf("Perimeter and area of rectangle respectively are: %f %f\n", 2 * (length + breadth), length * breadth); // Printing area, perimeter

    printf("Enter the radius of circle: ");
    scanf("%f", &radius); // Reading radius

    printf("area and circumference of circle: %f %f\n", 3.14 * radius * radius, 2 * 3.14 * radius); // Printing area and circumference

    return 0;
}