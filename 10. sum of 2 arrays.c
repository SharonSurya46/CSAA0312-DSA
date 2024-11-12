 #include<stdio.h>
int sum(int num1[],int num2[],int n,int m)
{
  int i,j,sum=0;
  for(i=0;i<n;i++)
  {
    sum+=num1[i];
  }
  for(j=0;j<m;j++)
  {
    sum+=num2[j];
  }
  return sum;
}
int main()
{
  int num1[]={1,2,3,4,5};
  int num2[]={6,7,8,9,10};
  int n=sizeof(num1)/sizeof(num1[0]);
  int m=sizeof(num2)/sizeof(num2[0]);
  printf("sum of two arrays: %d",sum(num1,num2,n,m));
}

