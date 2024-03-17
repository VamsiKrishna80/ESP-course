//WAP to swap the given two integers without using temporary variable
#include<stdio.h>
void main()
{
    int num1,num2,num3;
    printf("Enter num 1:");
    scanf("%d",&num1);
    printf("Enter num 2:");
    scanf("%d",&num2);
    num3=num1+num2;
    num2=num3-num2;
    num1=num3-num2;
    printf("swap numbers are num1 is %d num2 is %d",num1,num2);
}
