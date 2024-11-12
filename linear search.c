#include <stdio.h>
int main()
{
    int a[10]={2,3,4,5,67,9,6,5,3,7};
    int target=5;
    for(int i=0;i<10;i++)
    {
        if(a[i]==target)
        {
            printf("%d ",i);
        }
    }
    return 0;
}

