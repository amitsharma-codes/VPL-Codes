#include<stdio.h>
int main()
{
    char ch;
    scanf("%c",&ch);
    if(ch>='A' && ch<='Z')
    printf("upper case\n");
    else if(ch>='a' && ch<='z')
    printf("lower case\n");
    else if(ch>='0' && ch<='9')
    printf("numaric char\n");
    else
    printf("special char\n");
}