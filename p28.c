//Array Reverse in C
#include<stdio.h>
void ReverseArray(int arr[],int size);
int main()
{
    int Array[]={10,2,4,5,6,32,2,34,5230};
    int size=sizeof(Array)/sizeof(Array[0]);
    ReverseArray(Array,size);
    return 0;
}
void ReverseArray(int Array[],int size)
{
   int Array1[size],size1;
   size1=size;
   for(int i=0;i<size;i++)
   {
       Array1[i]=Array[size1-1];
       size1--;
   }
   for(int i=0;i<size;i++)
   {
       printf("%d ",Array1[i]);
   }
}
