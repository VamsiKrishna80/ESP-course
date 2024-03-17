// W.A.P to convert the given days into equivalent years , months , days
#include<stdio.h>
int main()
{
    int days,months=0,years=0;
    printf("Enter days :\n");
    scanf("%d",&days);
    if(days>=365)
    {
        years=days/365;
        days=days%365;
        if(days>=30)
        {
            months=days/30;
            days=days%30;
        }
    }
    else
    if(days>30)
        {
            months=days/30;
            days=days%30;
        }
    printf("%d Years ,%d months ,%ddays ",years , months, days);

}
