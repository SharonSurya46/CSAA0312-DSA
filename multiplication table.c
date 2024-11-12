int main()
{  
int a[2][2]={1,2,3,4};
int b[2][2]={1,2,3,4};
int mul[10][10];
int i,j,k;    
printf("multiply of the matrix=\n");    
for(i=0;i<2;i++)    
{    
for(j=0;j<2;j++)    
{    
mul[i][j]=0;    
for(k=0;k<2;k++)    
{    
mul[i][j]+=a[i][k]*b[k][j];    
}    
}    
}    
for(i=0;i<2;i++)    
{    
for(j=0;j<2;j++)    
{    
printf("%d\t",mul[i][j]);    
}    
printf("\n");    
}    
return 0;  
}
