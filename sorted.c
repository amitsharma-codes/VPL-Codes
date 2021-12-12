#include<stdio.h>
void sort(int*,int);
int main()
{
    int arr[100];
    scanf("%d",&arr[0]);
    if(arr[0]<=0)
    printf("invalid size");
    else if(arr[0]>(sizeof(arr)/sizeof(arr[0])))
    printf("Memory Overflow");
    else
    {
    for(int i=1;i<=arr[0];i++)
    scanf("%d",&arr[i]);
    sort(arr,arr[0]);
    for(int i=1;i<=arr[0];i++)
    printf(" %d ",arr[i]);
    }
}
void sort(int *arr,int n)
{
    int temp,i,j;
    for(i=1;i<=n;i++)
    for(j=i;j<=n;j++)
    if(arr[i]==0)
    {
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
}