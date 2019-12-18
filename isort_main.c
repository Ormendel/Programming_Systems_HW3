#include <stdio.h>
#include "isort.h"
#define size_arr 50

int main()
{
	int i;
	int arr[size_arr];
	printf("Please enter %d values -->\n",size_arr);
	for(i=0;i<size_arr;i++)
	{
		scanf("%d",arr+i);
	}
	insertion_sort(arr,size_arr);
	PrintArr(arr,size_arr);
	printf("\n");
	return 0;
}
