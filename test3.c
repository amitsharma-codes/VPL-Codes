#include<stdio.h>
int main()
{
    int data,temp,sum=0;
    scanf("%d",&data);
    while(temp != 0)
    {
    temp = data%10;
    sum += temp;
    data /=10;
    }
    if(sum<0)
    printf("%d",sum*(-1));
    else
    printf("%d\n",sum);
}