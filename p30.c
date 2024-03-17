//Count number of occurrences (or frequency) in a sorted array
#include<stdio.h>
int main()
{   int count=0;
    int Array[]={1,1,1,1,2,2,2,2,3,3,3,5,5,5,6,6,6,7,7,8,8,9,0};
    int occuredNum,size;
    scanf("%d",&occuredNum);
    size=sizeof(Array)/sizeof(Array[0]);
    count = CountNumOfOccurences(Array,size,occuredNum);
    printf("number of occurrences :%d",count);
}
int CountNumOfOccurences(int Array[],int size,int occuredNum)
{
    int count=0;
    for(int i=0;i<size;i++)
    {
        if(Array[i]==occuredNum)
        {
            count++;
        }
    }
    return count;
}
