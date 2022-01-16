#include <stdio.h>
#include <time.h>
// BUBBLE SORT
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

int main()
{
    // variable for calculating total time of execution
    int i = 0, j, n = 0;

    // declaring array to store data from file
    int arr[10000];


    // declaring file pointer
    FILE* fptr;

    // opening the integer file.
    fptr = fopen("random.txt", "r");


    // scanning integer from file to array
    while (fscanf(fptr, "%d", &arr[i]) == 1)
    {

        // for counting the number of elements
        n++;

        // for incrementing the array index
        i++;
    }

    // logic for bubble sort....
    // starts here...
    //==================================================

    for (i = 0; i < n-1; i++)

    // Last i elements are already in place
    for (j = 0; j < n-i-1; j++)
        if (arr[j] > arr[j+1])
            swap(&arr[j], &arr[j+1]);


    //==================================================
    // bubble sort logic ends here


    // printing the sorted array...
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
