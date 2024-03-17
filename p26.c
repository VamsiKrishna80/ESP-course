//Find a peak element which is not smaller than its neighbours
#include<stdio.h>
void ArrayPeakValues(int arr[],int a);
int main()
{
    unsigned int ArraySize,count=0;
    scanf("%d",&ArraySize);
    int Array[ArraySize];
    for(int i=0;i<ArraySize;i++)
    {
        scanf("%d",&Array[i]);
    }
   ArrayPeakValues(Array,ArraySize);
  return 0;
}
void ArrayPeakValues(int Array[],int size)
{
    for(int i=1;i<size-1;i++)
    {
        if(Array[i]>Array[i-1]&&Array[i]>Array[i+1])
        {
          printf("%d\n",Array[i]);
        }
    }
}
