#include <stdio.h>

#define MAX_SIZE 100

void printArr(int *arr, int size);


int main()
{
    int arr[MAX_SIZE];
    int size;
    int *left = arr;  // Pointer to arr[0]
    int *right;


    // Input size of array
    scanf("%d", &size);
    right = &arr[size - 1];  // Pointer to arr[size - 1]

    /*
     * Input elements in array
     */
    while(left <= right)
    {
        scanf("%d", left++);
    }

    // Make sure that left points to arr[0]
    left = arr;


    // Loop to reverse array
    while(left < right) 
    {
        /*
         * Swap element from left of array to right of array.
         */
        int t = *left;
        *left  = *right;
        *right  = t;

        // Increment left array pointer and decrement right array pointer
        left++;
        right--;
    }

    printArr(arr, size);
    return 0;
}


void printArr(int * arr, int size)
{
    // Pointer to arr[size - 1]
    int * arrEnd = (arr + size - 1);

    /* Loop till last array element */
    while(arr <= arrEnd)
    {
        printf("%d ", *arr);
        arr++;
    }
}

