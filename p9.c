//W.A.P to count number of even numbers ina range
#include<stdio.h>
int main()
{
    int num1,num2,count=0;
    printf("Enter a range numbers:\n");
    scanf("%d%d",&num1,&num2);
    for(int i=num1;i<num2;i++)
    {
        if(i%2==0)
        {
            count++;
        }
    }
    printf("Total number of even numbers in range : %d",count);
}
