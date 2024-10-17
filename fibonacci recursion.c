#include<stdio.h>
int fibonacci(int n)
{
	if(n<=1)
	{
		return n;
	}
	else
	{
		return fibonacci(n-1)+fibonacci(n-2);
	}
}
int main()
{
	int n;
	int i;
	printf("Enter the no. of terms in series:");
	scanf("%d",&n);
	printf("Fibonacci series:\n");
	for(i=0;i<n;i++)
	{
		printf("%d",fibonacci(i));
	}
	printf("\n");
	return 0;
}
