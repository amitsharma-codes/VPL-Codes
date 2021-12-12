#include<stdio.h>
int main()
{
    char s1[50],s2[20];int count=0;
    gets(s1); gets(s2);
    for(char *p=s1,*q=s2;*p;p++)
    {
    if(*p==*q)
    q++;
    if(*q=='\0')
    {
        count++;
        q=s2;
    }
    }
    if(count)
    printf("%d\n",count);
    else
    printf("substring not found\n");
}