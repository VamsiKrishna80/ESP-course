//Program to find the minimum (or maximum) element of an array
//Given an array, write functions to find the minimum and maximum elements in it.
#include<stdio.h>
int minElement(int ar[],int n);
int maxElement(int ar[],int n);
int main()
{   int min,max,size;
    int Array[10]={10,2,345,64,2322,23,45,23,23,23};
   int n=sizeof(Array)/sizeof(Array[0]);
    min=minelement(Array,n);
    max=maxelement(Array,n);
    printf("min value :%d\n",min);
    printf("Max value :%d\n",max);
}
int minElement(int array[],int n)
{
    int size,min;
    min=array[0];
    for(int i=1;i<n;i++)
    {
        if(min>array[i])
        {
            min=array[i];
        }
    }
    return min;
}
int maxElement(int array[],int n)
{
    int size,max;
    max=array[0];
    for(int i=1;i<n;i++)
    {
        if(max<array[i])
        {
            max=array[i];
        }
    }
    return max;
}
