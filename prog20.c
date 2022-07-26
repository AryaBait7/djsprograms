#include <stdio.h>

int main()
{

    int i;
    printf("Enter size of array");
    scanf("%d",&i);
	int arr[i];

	for(int j=0;j<i;j++){
        printf("Enter number in array:\n");
        scanf("%d",&arr[j]);
	}


	int *ptr = arr;


	printf("Array is:");
	for(int j = 0; j < i; j++)
	{

		printf("%d ", *(ptr + j));
	}

	return 0;
}