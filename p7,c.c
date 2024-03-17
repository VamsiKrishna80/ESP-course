//write a program to print even numbers in range
#include<stdio.h>
int main()
{
    int number1,number2;
    printf("enter a numbers:");
    scanf("%d%d",&number1,&number2);
    printf("Even numbers are\n");
    for(int i=number1;i<number2;i++)
    {
        if(i%2==0)
        {
            printf("\n%d",i);
        }
    }
}
