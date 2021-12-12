#include<stdio.h>
int found(int *arr,int num,int size);
int main()
{
    int a[20],result[20]={0},count=0;
    scanf("%d",&a[0]);
    if(a[0]<=0)
    {
        printf("invalid size\n");
    }
    else{
    for(int i=1;i<=a[0];i++)
        scanf("%d",&a[i]);
    for(int i=1;i<=a[0]+1;i++)
    {
        if(count=found(a+1,a[i],a[0]+1))
        if(count>1)
        if(!found(result,a[i],a[0]))
        {
        result[i]=a[i];
        printf("%d ",result[i]);
        }
    }
    if(found(a+1,0,a[0])>1)
    {printf("0 ");return 0;}
    else if(found(result,0,a[0])==a[0])
    printf("no duplicate elements\n");
}
}
int found(int *arr,int num,int size)
{
    int count=0;
    for(int i=0;i<size;i++)
        if(arr[i]==num)
        count++;
    return count;
}