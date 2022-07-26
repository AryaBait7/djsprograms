
#include <stdio.h>
  
void swap(int* xp, int* yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
  

void bubbleSort(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)
  

        for (j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[j + 1])
                swap(&arr[j], &arr[j + 1]);
}
  

int main()
{
    int s;
    printf("Enter size of array :");
    scanf("%d",&s);
    int arr[s];
    printf("Enter values in array\n");
    for(int i=0;i<s;i++){
        scanf("%d",&arr[i]);
    }
    bubbleSort(arr, s);
    printf("Sorted array: \n");
    
    for (int i = 0; i < s; i++)
        printf("%d ", arr[i]);
    printf("\n");
    return 0;
}