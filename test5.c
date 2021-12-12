#include<stdio.h>
int main()
{
    int num,bit,count=0;
    scanf("%d",&num);
    printf("\n");
    bit=31;
    while(bit >= 0)
    {
        if(bit==1)
        {
            if(!((num>>bit)&1))
            break;
        }
    if(((num>>bit)&1) && ((num>>(--bit))&1))
    {
        count++;
    }
    bit--;
    }
    printf("%d",count);
}