// W.A.P to print given range numbers;
#include<stdio.h>
int main()
{
    int number1,number2;
    printf("Enter the numbers that you want print in between numbers:\n");
    scanf("%d%d",&number1,&number2);
    for(int i=number1;i<number2;i++)
    {
        printf("%d\n",i);
    }
}
