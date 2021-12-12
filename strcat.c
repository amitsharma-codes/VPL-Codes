
#include<stdio.h>
char *strcp(char*,char*);
int count(char *);
int main()
{
char s1[15],s2[10];
gets(s1);
gets(s2);
//strcp(s1,s2);
printf("%s",strcp(s1,s2));
}
int count(char* s)
{
    int i;
    for(i=0;s[i];i++);
    return i;
}
char *strcp(char* s1,char* s2)
{
    int i,j;
    for(i=count(s1),j=0;j<count(s2);i++,j++)
    s1[i]=s2[j];
    s1[i++]='\0';
    return s1;
}