//Find Subarray with given sum
#include<stdio.h>
void FindSubArray(int Array[],int size,int sum);
int main()
{
    int Array[]={1,4,20,3,10,5};
    int size=sizeof(Array)/sizeof(Array[0]);
    //printf("%d",size);
    int sum=0;
    scanf("%d",&sum);
    FindSubArray(Array,size,sum);
    return 0;

}
void FindSubArray(int Array[],int size,int sum)
{
    int sum1=0,got=0;
   for(int i=0;i<size;i++)
    {
        sum1=0;
        for(int j=i;j<size;j++)
        {
            sum1=sum1+Array[j];
            if(sum==sum1)
            {
                got=1;
                printf("%d and %d",i,j);
                break;
            }
            if(sum1>30)
            break;
        }
        if(got==1)
        {
            break;
        }
    }
}
