#include<stdio.h>
int main()
{
    char input[20];
    gets(input);
    int len=strlen(input);
    for(int i=1;i<=len;i++)
        input[len+i]=input[len-i];
    input[(2*len)+1]='\0';
    for(int i=0,j=len+1;input[i];i++,j++)
    if(input[i]!=input[j])
    {
    printf("not palindrom\n");
    return 0;
    }
    printf("palindrom\n");
    return 0;
}