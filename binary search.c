#include<stdio.h>
int main()
{
	int a[10]={1,2,3,4,5,6,7,8,9,10};
	int target=9;
	int low=0;
	int high=9;
	int mid;
	while(low<=high)
	{
		mid=low+(high-low)/2;
		if(a[mid]==target)
		{
			printf("%d",mid);
			return 0;
		}
		if(a[mid]<target)
		{
			low=mid+1;
		}
		else
		{
			high=mid-1;
		}
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		\\
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
	}
	printf("not found");
	return 0;
}
