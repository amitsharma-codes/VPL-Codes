#include<stdio.h>
#include<stdlib.h>
int valid(char *arr);
int main()
{
    char a[50];
    scanf("%[^\n]s",a);
    if(valid(a))
    {
    a[0]=toupper(a[0]);
    for(int *p=a;*p;p++)
    if(*p==' ')
    *(p+1)=toupper(*(p+1));
    printf("%s",a);
    }
    else
    printf("invalid input");
    
}
int valid(char *arr)
{
    for(;*arr;arr++)
    if(!((*arr>='a' && *arr<='z')||(*arr>='A' && *arr<='Z')||(*arr==' ')))
    return 0;
    return 1;
}