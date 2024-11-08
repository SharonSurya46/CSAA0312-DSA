#include<stdio.h>
#include<stdbool.h>
#include<limits.h>
#define n 9
int mindistance(int d[],bool a[])
{
    int min=INT_MAX,minindex=-1;
    for(int i=0;i<n;i++)
	{
        if(!a[i]&&d[i]<=min)
		{
            min=d[i];
            minindex=i;
        }
    }
    return minindex;
}
void print(int d[])
{
    for(int i=0;i<n;i++)
	{
        printf("Distance from source to %d: %d\n",i,d[i]);
    }
}
void dijkstra(int graph[n][n],int s)
{
    int d[n];
    bool a[n];
    for(int i=0;i<n;i++)
	{
        d[i]=INT_MAX;
        a[i]=false;
    }
    d[s]=0;
    for(int j=0;j<n-1;j++)
	{
        int u=mindistance(d,a);
        a[u]=true;
        for(int k=0;k<n;k++)
		{
            if(!a[k]&&graph[u][k]&&d[u]!=INT_MAX&&d[u]+graph[u][k]<d[k])
			{
                d[k]=d[u]+graph[u][k];
            }
        }
    }
    print(d);
}
int main()
{
    int graph[n][n]={{0,4,0,0,0,0,0,8,0},{4,0,8,0,0,0,0,11,0},{0,8,0,7,0,4,0,0,2},{0,0,7,0,9,14,0,0,0},{0,0,0,9,0,10,0,0,0},{0,0,4,14,10,0,2,0,0},{0,0,0,0,0,2,0,1,6},{8,11,0,0,0,0,1,0,7},{0,0,2,0,0,0,6,7,0}};
    dijkstra(graph,0);
    return 0;
}
