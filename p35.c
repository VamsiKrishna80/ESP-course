/*
Find Second largest element in an array
Given an array of integers, our task is to write a program that efficiently finds the second-largest element present in the array.

Examples:

Input: arr[] = {12, 35, 1, 10, 34, 1}
Output: The second largest element is 34.
*/
#include<stdio.h>
void SecondLargestNum(int Array[],int size);
int main()
{
    int Array[]={1,10,3,36,5,45};
    int size=sizeof(Array)/sizeof(Array[0]);
    SecondLargestNum(Array,size);//calling Function
}
void SecondLargestNum(int Array[],int size)
{
    int i,min,count=0,temp;//taking variables
    for( i=0;i<size;i++)
    {
       if(Array[i]>Array[i+1])//Sorting Acsending Array
       {
           temp=Array[i];
           Array[i]=Array[i+1];
           Array[i+1]=temp;
       }
    }
    printf("Second largest Number in An Array :%d",Array[size-2]);//display 2nd digit of last values
}
