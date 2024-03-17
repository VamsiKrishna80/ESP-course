//W.A.P to print the given number
#include<stdio.h>
void main()
{
    int num,NPN=1;
    scanf("%d",&num);
    for(int i=1;i<=num/2;i++)
    {
        if(i*i==num)
        {
            printf("Perfect number");
            NPN=0;
            break;
        }
        NPN=1;
    }
    if(NPN==1)
    {
        printf("NON PERFECT NUMBER");
    }
    return 0;
}
