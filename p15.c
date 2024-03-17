#include<stdio.h>
int main()
{
    int num,exponent,num2=1;
    printf("Enter a number and exponent of a number:\n");
    scanf("%d%d",&num,&exponent);
    for(int i=1;i<=exponent;i++)
    {
        num2=num*num2;
    }
    printf("total num is %d",num2);
}
