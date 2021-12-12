#include<stdio.h>
int CheckPrime(int);
int CheckPerfect(int);
int main()
{
    int num;
    scanf("%d",&num);
    if(num<0)
    printf("not perfect number\n");
    else if(CheckPrime(num))
    printf("not perfect number\n");
    else if(CheckPerfect(num))
    printf("Perfect number\n");
    else
    printf("not perfect number\n");
}
int CheckPrime(int x)
{
    int i;
    for(i=2;i<=x/2;i++)
    {
        if(x%i==0)
        return 0;
    }
    return 1;
}
int CheckPerfect(int x)
{
    int i,temp=0,sum=0;
    for(i=1;i<=x/2;i++)
    {
        if(x%i==0)
        {
        temp = i;
        sum+=temp;
        }
    }
    if(sum==x)
    return 1;
    else
    return 0;
}