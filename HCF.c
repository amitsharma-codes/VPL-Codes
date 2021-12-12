#include<stdio.h>
int main()
{
    int in1,in2,big=0,HCF=0,i;
    scanf("%d%d",&in1,&in2);
    if((in1<0) || (in2<0))
    {
    printf("wrong input");
    return 0;
    }
    if(in1>in2)
    big = in1;
    else
    big = in2;
    for(i=1;i<=big;i++)
    {
        if(((in1%i)==0)&&((in2%i)==0))
        if(i>=HCF)
        HCF =i;
    }
    printf("%d",HCF);
}