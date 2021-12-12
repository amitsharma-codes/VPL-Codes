#include<stdio.h>
#include<strings.h>
int vowels(char*);
int main()
{
    char str[20];int count=0;
    gets(str);
    if(count=vowels(str))
    printf("%d\n",count);
    else
    printf("No vowels\n");
}
int vowels(char *p)
{
    int count=0;
    for(;*p;p++)
    switch(*p)
    {
        case 'A': case 'E': case 'I': case 'O': case 'U':
        case 'a': case 'e': case 'i': case 'o': case 'u':count++;
    }
    return count;
}