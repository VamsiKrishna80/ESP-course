//Count pairs of Array , size , Sum pairs
#include<stdio.h>
void CountPairs(int Array[],int size,int sum);
int main()
{
    int size;
    int Sum;
    printf("Enter size:\n");
    scanf("%d",&size);
    printf("Enter Sum:\n");
    scanf("%d",&Sum);
    int Array[size];
    for(int i=0;i<size;i++)
    {
        scanf("%d",&Array[i]);
    }
    CountPairs(Array,size,Sum);
}
void CountPairs(int Array[],int size,int sum)
{
    int sum1=0,count=0;
    for(int i=0;i<size;i++)
    {
        sum1=Array[i]+Array[i+1];
        if(sum==sum1)
        {
            count++;
        }
        sum1=0;
    }
    printf("Count Pairs : %d",count);
}
