#include<stdio.h>
#include<string.h>
int main()
{
    char s[30],sub[30],*p,count=0;
    gets(s);
    gets(sub);
    AGAIN:
    if(p=strstr(s,sub))
    {
    for(char *r=p;r<=p+strlen(sub)-1;r++)
    *r='*';
    p++;
    count++;
    if(*p)
    goto AGAIN;
    }
    if(count==0)
    {
    printf("substring not found");
    return 0;
    }
    puts(s);
}