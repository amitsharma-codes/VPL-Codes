#include<stdio.h>
int main()
{
    int data,i,j;
    scanf("%d",&data);
    for(i=0,j=31;i<j;i++,j--)              //loop for testing the bits of the data from 0 to 31
    {
        if(((data>>i)&1)^ ((data>>j)&1))
        {
           //testing the bits one by one and storing the set bits in data in reverse order
        data ^= (1<<j);
        data ^= (1<<i);
        }
    }
    for(i=31;i>-1;i--)
    printf("%d ",(data>>i)&1);
    //printf("\n");//printing the data bit
    printf("%d ",data);            //printing data's value
}