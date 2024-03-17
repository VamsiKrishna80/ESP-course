//Find the missing number in a Array
//ex: 1,2,3,4,6,7,8  output : 5
// Enter Array size "N" , Array values containing 1 to N-1
#include<stdio.h>
void missing(int Array[],int size);
int main()
{
    int size,count=0;
    scanf("%d",&size);
    int Array[size];
    for(int i=0;i<size-1;i++)
    {
        scanf("%d",&Array[i]);
    }
    missing(Array,size);
}
void missing(int Array[],int size)
{
    int count=0;
    for(int i=1;i<=size;i++)
    {
       count=0;
        for(int j=0;j<size;j++)
        {
            if(i==Array[j])
            {
               count++;
            }
        }
        if(count==0)
          {

            printf("MISING NUMBER : %d",i);
          }
    }
}
