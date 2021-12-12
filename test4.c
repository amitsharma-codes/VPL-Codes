#include<stdio.h>
int main()
{
    float cel,far,temp;
    int choice;
    scanf("%d%f",&choice,&temp);
    switch(choice)
    {
    case 1:
    cel = ((float)5/9) * (temp-32);
    printf("%.2f C\n",cel);
    break;
    case 2:
    far = (temp*9)/5 + 32;
    printf("%.2f F\n",far);
    }
}