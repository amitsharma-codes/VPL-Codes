#include<stdio.h>
#include<string.h>
int main()
{
    char s[30],ch;
    gets(s);ch=getchar();
    if(strchr(s,ch))
    {
    for(char *p=s;p=strchr(p,ch);p++)
        {
        memmove(p,p+1,strlen(p+1)+1);
        p--;
        }
    printf("%s",s);
    }
    else
    printf("character not found");
}