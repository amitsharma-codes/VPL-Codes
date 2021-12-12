#include<stdio.h>
int main()
{
    int data,n,p,i,rev;
    scanf("%d%d%d",&data,&n,&p);
    int mask = (~(~0<<(p+n)))<<n;
    if(n>31 || p>31 || n<0 || p<0)
    {
        printf("invalid range");
        return 0;
    }
    else if(p<n)
    {
        printf("wrong input");
        return 0;
    }
    else if(data>0)
    {
        for(i=n;i<=p;i++)
        {
            if(data&(1<<i))
            {
                rev=mask&(1<<((p+n)-i));
            }
        }
    }
    printf("%d",rev);
}
