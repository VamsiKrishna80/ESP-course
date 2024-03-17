//C program to sort an array in ascending order
#include<stdio.h>
void AscendingOrderedArray(int Array[],int size);
int main()
{
    int array[]={10,3,6,23,56,23};
    int size=sizeof(array)/sizeof(array[0]);
    //printf("%d\n",size);
    AscendingOrderedArray(array,size);
    return 0;
}
void AscendingOrderedArray(int Array[],int size)
{
    int temp;
    for(int i=0;i<size-1;i++)
    {
        if(Array[i]>Array[i+1])
        {
            temp=Array[i];
            Array[i]=Array[i+1];
            Array[i+1]=temp;
        }
    }
    for(int i=0;i<size;i++)
    {
        printf("%d ",Array[i]);
    }
}
