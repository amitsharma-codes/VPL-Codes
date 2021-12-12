#include<stdio.h>
int reverse(int n);
int main()
{
    int num,min,max;
    scanf("%d%d",&min,&max);
for(num =min;num<=max;num++)
{
    int rev;
    rev = reverse(num);
  
    if(num ==rev)
    printf("%d ",num);
}
return 0;
}
int reverse(int num)
{
    int temp=num,rev=0,i;
    for(temp=num;temp;temp/=10)
    rev = rev*10 + temp%10;
    return rev;
}
