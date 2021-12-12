#include<stdio.h>
int main()
{
    int num,count=0,temp;
    scanf("%d",&num);
    temp=num;
    while(temp != 0)
    {
        if(temp%10==2 || temp%10 == 3 || temp%10 == 5 || temp%10 == 7)
        {
        printf("%d ",temp%10);
        count++;
        }
        temp/=10;
    }
    if(count==0)
    printf("The prime digit not found\n");
    
}