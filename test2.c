#include<stdio.h>
int main()
{
    int data;
    unsigned int pos1,pos2;
    scanf("%d",&data);
    scanf("%u",&pos1);
    scanf("%u",&pos2);
    if(pos1>=32 || pos2>=32)
    printf("ERROR\n");
    else{
    if(data&(1<<pos1) ^ data&(1<<pos2))
    {
        data ^= (1<<pos1);
        data ^= (1<<pos2);
    }
    int bit=31;
    while(bit != -1)
    {
        printf("%d",(data>>bit)&1);
        bit--;
    }
    printf("\n");
    printf("%d\n",data);
}
    
}