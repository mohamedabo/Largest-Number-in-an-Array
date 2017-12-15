/* Abdirahman Mohamed || NBC Universal Technical Interview Problem 2
 * A Program to Find the Largest Number in an Array
 */
#include <stdio.h>

int main()
{
    int array[50], size, i, largest; //initilize size, number of elements in the array and the largest number
    printf("\n Enter the size of the array: ");
    scanf("%d", &size); //reads the input size
    printf("\n Enter %d elements of  the array: ", size);
    for (i = 0; i < size; i++)
        scanf("%d", &array[i]); //adds input elements to the array
    largest = array[0]; // the search for the largest number would begin from the first element
    for (i = 1; i < size; i++)
    {
        if (largest < array[i]) // if the array is bigger than the largest number
            largest = array[i]; // the largest number would equal that element in the array
    }
    printf("\n The largest element present in the given array is : %d", largest);
    return 0; // ending the program
}
