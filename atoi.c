#include<stdio.h>
#include<string.h>
#include<math.h>
int uatoi(char* p);
int main()
{
    char s[12];int n;
    gets(s);
    if((n=uatoi(s))!=-1)
    printf("%d",n);
    else
    printf("invalid");
}
int uatoi(char* p)
{
    int n1,sign=1;
    for(int i=strlen(p)-1;*p;p++,i--)
    {
        if((*p>='0' && *p<= '9')|| *p=='-')
        {
        if(!(*p=='-'))
        n1+=(*p-48)*pow(10,i);
        else if(*p=='-') sign=-1;
        }
        else
        return -1;
    }
    return sign*n1;
}