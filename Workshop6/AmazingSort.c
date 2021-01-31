#include <stdio.h>

#define MAX_SIZE 100


/* Function declaration */
void inputArray(int * arr, int size);
void printArray(int * arr, int size);

/* Sort function declaration */
int sortAscending(int * num1, int * num2);
int sortDescending(int * num1, int * num2);

void sort(int * arr, int size, int (* compare)(int *, int *));



int main()
{
    int arr[MAX_SIZE];
    int size;

    scanf("%d", &size);
    inputArray(arr, size);



    // Sort and print sorted array in ascending order.
    printf("ascending order: ");
    sort(arr, size, sortAscending);
    printArray(arr, size);


    // Sort and print sorted array in descending order.
    printf("\ndescending order: ");
    sort(arr, size, sortDescending);
    printArray(arr, size);

    
    return 0;
}


void inputArray(int * arr, int size)
{
    int * arrEnd = (arr + size - 1);

    while(arr <= arrEnd)
        scanf("%d", arr++);
}



void printArray(int * arr, int size)
{
    int * arrEnd = (arr + size - 1);

    while(arr <= arrEnd)
        printf("%d ", *(arr++));
}


int sortAscending(int * num1, int * num2)
{
    return (*num1) - (*num2);
}

int sortDescending(int * num1, int * num2)
{
    return (*num2) - (*num1);
}


void sort(int * arr, int size, int (* compare)(int *, int *))
{
    // Pointer to last array element
    int * arrEnd  = (arr + size - 1);

    // Pointer to current array element
    int * curElem = arr;
    int * elemToSort;


    // Iterate over each array element
    while(curElem <= arrEnd)
    {
        elemToSort = curElem;

        while(elemToSort <= arrEnd)
        {
            
            if(compare(curElem, elemToSort) > 0)
            {
            	int temp = *curElem ;
                *curElem   = *elemToSort;
                *elemToSort = temp;
            }

            elemToSort++;
        }

        // Move current element to next element in array.
        curElem++;
    }
}

