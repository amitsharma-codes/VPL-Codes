#include<stdio.h>
int main()
{
    int n1=0,n2=1,n3,n;
    scanf("%d",&n);
    if(n>0)
    {
    printf("%d,%d",n1,n2);
    for(int i=0;n3<n;i++)
    {
        n3=n1+n2;
        n1=n2;
        n2=n3;
        printf(",%d",n3);
    }
    printf("\n");
    }
    else if(n<0)
    printf("wrong input\n");
    else
    printf("0\n");
}