#include<stdio.h>
#include<math.h>
int main()
{
    int temp,rep=0,count=0,num;
    scanf("%d",&num);
    if(num==0)
    {
    printf("%d",num=1);
    return 0;
    }
    rep=num;
    for(temp=num;temp;temp/=10)
    {
        if(rep>0)
        {
        if(temp%10==0)
        rep +=1*pow(10,count);
        count++;
        }
        if(rep<0)
        {
            if(temp%10==0)
            rep-=1*pow(10,count);
            count++;
        }
    }
    if(rep==num)
    printf("no zeros in input\n");
    else
    printf("%d\n",rep);
}