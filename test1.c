/*  
    Mahady Hasan Miraz
    ID: 1935202037 
*/

#include <stdio.h>


// merge sort function
void mergeSort(int arr[], int lowerbound, int upperbound)
{
    if(lowerbound < upperbound)
    {
        int midpoint = (lowerbound + upperbound) / 2;
        mergeSort(arr, lowerbound, midpoint);
        mergeSort(arr, midpoint + 1, upperbound);
        merge(arr, lowerbound, midpoint, upperbound);
    }
}

// function to merge the subarrays
void merge(int arr[], int low, int mid, int up)
{
    int b[5];   //same size of a[]
    int i, j, k;
    k = 0;
    i = low;
    j = mid + 1;
    while(i <= mid && j <= up)
    {
        if(arr[i] < arr[j])
        {
            b[k++] = arr[i++];    // same as b[k]=a[i]; k++; i++;
        }
        else
        {
            b[k++] = arr[j++];
        }
    }
  
    while(i <= mid)
    {
        b[k++] = arr[i++];
    }
  
    while(j <= up)
    {
        b[k++] = arr[j++];
    }
  
    for(i=up; i >= low; i--)
    {
        arr[i] = b[--k];  // copying back the sorted list to a[]
    } 
}

// function to print the array
void printArray(int a[], int size)
{
    int i;
    for (i=0; i < size; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}
int main()
{
    int arr[] = {32, 45, 67, 2, 7};
    int size = sizeof(arr)/sizeof(arr[0]);
 
    /*int arr[100];
    int size;
    
    printf("How many elements do you want to sort? : ");
    scanf("%d",&size);

    printf("Enter %d elements : ",size);
    for(int i=0;i<size;++i)
    {
        scanf("%d",&arr[i]);
    }*/

    printf("Given array: ");
    printArray(arr, size);
    
    mergeSort(arr, 0, size - 1);
 
    printf("\nSorted array: ");
    printArray(arr, size);
    return 0;
}