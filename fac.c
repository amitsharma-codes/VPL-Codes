#include<stdio.h>
int main()
{
    int n,temp=0;
    scanf("%d",&n);
   if(n>0)
    {
        temp=n;
        for(int i=1;i<n;i++)
        temp*=i;
        printf("%d\n",temp);
   }
   else if(n<0)
    {
        temp=n*-1;
        for(int i=1;i<(n*-1);i++)
        temp*=i;
        printf("%d\n",temp*-1);
    }
    else
    printf("1\n");
}