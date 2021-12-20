#include<stdio.h>
int main()
{
    char s1[50],s2[20],*f;int count=0;
    gets(s1); gets(s2);
    int len=strlen(s2);
    for(char *p=s1,*q=s2;*p;p++)
    {
        if(f=strstr(p,q))
        {
            p=f;
            count++;
        }
    }
    if(count)
    printf("%d\n",count);
    else
    printf("substring not found\n");
}