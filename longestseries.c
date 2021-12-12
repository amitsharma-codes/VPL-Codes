#include<stdio.h>
int main()
{
    int x,max=0,count=0,i;
    scanf("%d",&x);
    for(i=0;i<32;i++)
    {
        if((x>>i)&1)
        {
            count++;
            if(max<count)
            max=count;
        }
        else
        count=0;
    }
    if(max==0)
    printf("no series of one's\n");
    else
    printf("%d\n",max);
}