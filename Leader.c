#include<stdio.h>
int main()
{
    int a[15],n;
    scanf("%d",&n);
    if(n<=0)
    printf("Invalid size\n");
    else
    {
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(int i=0;i<n;i++)
    for(int j=i+1;j<n+1;j++)
    {
    if(a[i]>=a[j]);
    else break;
    if(j==n)
    printf("%d ",a[i]);
    }
    }
}