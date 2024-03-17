//W.A.P to print given number is prime or not
#include<stdio.h>
int main()
{
    int num,prime=1;
    scanf("%d",&num);
    for(int i=2;i<num;i++)
    {
        if(num%i==0)
        {
            prime=0;
        }
    }
    if(prime==1)
        {
            printf("prime %d",num);
        }
    else
            printf("Not prime");
}
