#include <stdio.h>
#include <time.h>
using namespace std;
// INSERTION SORT
int main()
{
    // variable for calculating total time of execution
    int i = 0, j, n = 0, key;

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

    // logic for insertion sort....
    // starts here...
    //==================================================

    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;

        /* Move elements of arr[0..i-1], that are
        greater than key, to one position ahead
        of their current position */
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }


    //==================================================
    // insertion sort logic ends here
    // printing the sorted array...
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
      }
    return 0;
}
