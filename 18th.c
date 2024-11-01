// Write a function to sort an array of integers using any sorting technique.

#include <stdio.h>

// Prototype of functions
void swap(int *, int *);
void printingArray(int[], int);
int partition(int[], int, int);
void quickSort(int[], int, int);

int main()
{
    int arr[] = {1, 4, 10, 8, 7, 5, 6, 3, 2, 9}; // Sample array
    int n = sizeof(arr) / sizeof(arr[0]);        // Length of array

    printf("Original array: \n");
    printingArray(arr, n);

    quickSort(arr, 0, n - 1); // Calling quick sort function

    printf("Sorted array: \n");
    printingArray(arr, n);
    return 0;
}

// Function definition for swapping two variables
void swap(int *a, int *b)
{
    int temp = *a; // Taking a value in a temporary variable
    *a = *b;       // Changing a value with b
    *b = temp;     // Changing b value with temporary variable having value of a varibale
}

// Function definition for printing an array
void printingArray(int arr[], int length)
{
    int i = 0; // Starting value of i
    while (i < length)
    {
        printf("%d ", arr[i]); // Printing array's ith index item
        i++;                   // Updating i value
    }
    printf("\n");
}

// Partition function to rearrange the elements of an array
int partition(int arr[], int low, int high)
{
    int pivot = arr[high]; // Choosing the last element as pivot
    int i = (low - 1);

    for (int j = low; j < high; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            swap(&arr[i], &arr[j]); // Swap function calling
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

// Quick sort function
void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int pi = partition(arr, low, high); // partition function calling

        // Recursion
        quickSort(arr, low, pi - 1);  // Sort elements before partition
        quickSort(arr, pi + 1, high); // Sort elements after partition
    }
}