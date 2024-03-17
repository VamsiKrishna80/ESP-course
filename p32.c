// Cyclic Rotate on Array
//ex: 1,2,3,4,0--->0,1,2,3,4

#include<stdio.h>
void CyclicRotate(int Array[],int size);
int main()
{
    int Array[]={2,3,4,5,1};
    int size=sizeof(Array)/sizeof(Array[0]);
    CyclicRotate(Array,size);
}
void CyclicRotate(int Array[],int size)
{
    int lastDigit=Array[size-1];// Seperating last digit of Array
    int b=size-1;
        for(int j=4;j>=0;j--)
        {
            Array[j]=Array[j-1];// value stored like   5->1,4-5,3-4,2-3,2-2;
        }

    Array[0]=lastDigit;// value assigned to 0 index
    for(int i=0;i<size;i++)
    {
        printf("%d ",Array[i]);//cyclic rotate values
    }
}
