
#include<stdio.h>
int main()
{
    int num1,num2;
    printf("enter a table number and upto ? digits");
    scanf("%d%d",&num1,&num2);
    for(int i=1;i<=num2;i++)
    {
        printf("%d * %d = %d\n",num1,i,num1*i);
    }
}
