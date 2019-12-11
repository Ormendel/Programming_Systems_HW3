#include <stdio.h>

void shift_element(int* arr,int i)
{
	if(i<0)
		printf("Error: number of values to move right = %d (negative) .\nThe array remained the same.\n",i);
	else if(i==0)
		printf("The array remained the same.\n");	
	else// i is positive
	{
		int counter;
		int current=*arr,save_next;
		int jumps=1;
		for(counter=1;counter<=i;counter++)//Count shifting to the right side of the array
		{
			save_next=*(arr+1);
			*(arr+1)=current;
			current=save_next;	
			arr++;					
		}
		printf("Finished\n");
	}
}
int main()
{
	int i;
	int a[]={1,5,6,7,4};
	int* pt=&a[3];
	shift_element(pt,1);
	for(i=0;i<5;i++)
		printf("%d ",a[i]);
	printf("\n");
	return 0;
}
