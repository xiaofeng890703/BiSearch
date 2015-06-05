#include <stdio.h>

int BiSearch(int array[],int s,int length)
{
	int low = 0;
	int high = length;
	int mid;
	while(low <= high)
	{
		mid = (low + high)/2;
		if(s == array[mid])
			printf("find s = %d at %d\n",array[mid],mid+1);
		if(s > array[mid])
		{
			low = mid + 1; 
		}
		else
			high = mid - 1;		
	}

}
int main()
{
	int array[] = {3,5,7,9,11,23,38,45,47,57,99};
	int s;
	int length = sizeof(array)/sizeof(int);
	printf("please input the search number: \n");
	scanf("%d",&s); 
	BiSearch(array,s,length);

}
