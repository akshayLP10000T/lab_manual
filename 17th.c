// Write two user-defined functions to implement the given operations in an array:
// Insert an element at a particular position of an array.
// Delete an element from a given position in the array.
// Display the final array.

#include <stdio.h>

// Function Prototypes
void insertElement(int[], int *, int, int);
void deleteElement(int[], int *, int);

int main()
{
    int arr[100], n, pos, value;

    // Initialize array
    printf("Enter the number of elements you want in the array: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Inserting element
    printf("Enter the position to insert an element (0 to %d): ", n);
    scanf("%d", &pos);
    printf("Enter the value to insert: ");
    scanf("%d", &value);
    insertElement(arr, &n, pos, value); // Function calling to insert element

    printf("Array after insertion: ");
    for (int i = 0; i < n; i++)
    { // Printing array after inserting element
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Delete element
    printf("Enter the position to delete an element (0 to %d): ", n - 1);
    scanf("%d", &pos);
    deleteElement(arr, &n, pos); // Function calling for deleting element

    printf("Array after deletion: ");
    for (int i = 0; i < n; i++)
    { // Printing array after deleting element
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

// Function to insert an element at a particular position
void insertElement(int arr[], int *n, int pos, int value)
{
    if (pos < 0 || pos > *n)
    { // Checking for valid positions
        printf("Invalid position!\n");
        return;
    }

    for (int i = *n; i > pos; i--)
    {
        arr[i] = arr[i - 1]; // Shifting elements to right
    }
    arr[pos] = value; // Insert the element
    (*n)++;           // Increasing the size of the array
}

// Function to delete an element from a particular position
void deleteElement(int arr[], int *n, int pos)
{
    if (pos < 0 || pos >= *n)
    { // Searching for valid position
        printf("Invalid position!\n");
        return;
    }

    for (int i = pos; i < *n - 1; i++)
    {
        arr[i] = arr[i + 1]; // Shifting element to left
    }
    (*n)--; // Decreasing the size of the array
}