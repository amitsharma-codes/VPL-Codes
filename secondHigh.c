#include<stdio.h>
int alldigsame(int);
void secondHigh(int);
int main()
{
    int num;
    scanf("%d",&num);
    if(num/10 == 0)
    printf("you have supplied single digit only\n");
    else if(alldigsame(num))
    printf("all digits are same\n");
    else
    secondHigh(num);
}
int alldigsame(int x)
{
    int cur=(x%10)%10,prev=x%10;
    x/=100;
    while(x)
    {
        if(cur==prev)
        {
            prev=cur;
            cur=x%10;
            x/=10;
        }
        else
        break;
    }
    if(x!=0)
    return 0;
    else
    return 1;
}
void secondHigh(int x)
{
    int count=0,cur,temp,y;
    if(x<0)
    {
    x*=-1;
    }
    for(temp=x;temp;temp/=10)
    {
        cur = temp%10;
        for(y=x;y;y/=10)
        {
        if(cur<(y%10)%10)
        count++;
        }
        if(count==1)
        {
        printf("%d",cur);
        break;
        }
        count=0;
    }
}