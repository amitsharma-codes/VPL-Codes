#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char* input(char*);
void replace(char*,char*,char*);
int main()
{
    char *s1=0,*s2=0,*s3=0;
    s1=input(s1);
    s2=input(s2);
    s3=input(s3);
    if(strstr(s1,s2)==NULL)
    printf("Substring not found\n");
    else
    {
    replace(s1,s2,s3);
    printf("%s",s1);
    }
}
char* input(char* p)
{
    int i=0;
    do
    {
        p=(char*)realloc(p,i+1);
        p[i]=getchar();
    }while(p[i++]!='\n');
    p[i-1]='\0';
    return p;
}
void replace(char*p,char*q,char*r)
{
    int diff,n=strlen(q),m=strlen(r);
    char* w;
    for(;strstr(p,q);)
    {
    diff=n-m;
    w=strstr(p,q)+n;
    if(diff<0)
    {
        p=realloc(p,(diff*-1)+strlen(p));
        memmove(w+(diff*-1),w,strlen(w)+1);
        strncpy(w-n,r,strlen(r));
    }
    else if(diff>0)
    {
        memmove(w-diff,w,strlen(w)+1);
        p=realloc(p,strlen(p)-diff);
        strncpy(w-n,r,strlen(r));
    }
    else
    strncpy(w-n,r,strlen(r));
    }
}
