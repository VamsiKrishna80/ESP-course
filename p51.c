/*
Question: Adjust the carry in an integer array. (i.e. convert the 2 digit number
into single digit and add the carry to the next number)
E.g.: Array - 6 12 3 15 7
Answer: 7 2 4 5 7
*/
#include<stdio.h>
int main()
{
    int size,sum=0,sum1=0,carry=0;
    printf("Enter Array size:\n");
    scanf("%d",&size);
    int Array[size];
    for(int i=0;i<size;i++)
    {
        scanf("%d",&Array[i]);
    }
    for(int i=(size-1);i>=0;i--)
    {
        sum=Array[i]+carry;
        if(sum>9)
        {
            sum1=sum%10;
            carry=sum/10;
            sum=0;
        }
        else{
            carry=0;
            sum1=0;
        }
        Array[i]=sum1+sum;
    }
    for(int i=0;i<size;i++)
    {
        printf("%d ",Array[i]);
    }
}
