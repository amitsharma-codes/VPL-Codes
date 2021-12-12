#include<stdio.h>
int main()
{
    char s[50],ch,count=0;
    gets(s);
    scanf("%c",&ch);
    for(int i=0;i<strlen(s);i++)
    if(s[i]==ch)
    count++;
    if(count>0)
    printf("%d\n",count);
    else
    printf("not found\n");
}