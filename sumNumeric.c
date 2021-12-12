#include<stdio.h>
#include<ctype.h>
int main()
{
    char s[30];int n,sum=0;
    gets(s);
    for(char *p=s;*p;p++)
    if(isdigit(*p))
    {
        n=*p-48;
        sum+=n;
    }
    if(sum)
    printf("%d",sum);
    else
    printf("numeric characters not found in  given string");
}