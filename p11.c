// divisible numbers of given number
#include<stdio.h>
int main()
{
    int num;
    scanf("%d",&num);
    for(int i=1;i<=num;i++)
    {
        if(num%i==0)
        {
            printf("\n Divisible number:%d\n",i);
        }
    }
return 0;
}
