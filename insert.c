#include<stdio.h>
int main()
{
    char s1[50],s2[50],pos;
    gets(s1);
    gets(s2);
    scanf("%d",&pos);
    if(pos<0)
    printf("invalid position");
    else if(pos>count(s1))
    printf("position is beyond the main string length\n");
    else
    {
        int i,j,k;
        for(i=count(s1),j=count(s1)+count(s2);i!=pos-1;i--,j--)
        s1[j]=s1[i];
        for(i=pos,j=0;j<count(s2);i++,j++)
        s1[i]=s2[j];
        printf("%s",s1);
    }
}
int count(char* s)
{
    int i;
    for(i=0;s[i];i++);
    return i;
}