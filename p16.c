#include<stdio.h>
int main()
{
    int Num,a,b,c,digitvalue=1,count=0,sum=0;
    scanf("%d",&Num);
    a=Num;b=Num;//copying a number into a,b varaibles
    while(a>0)
    {
        count++;
        a=a/10;
    }
    while(b)
    {
        digitvalue=1;
        c=b/10;
        for(int j=1;j<=count;j++)
        {
            digitvalue=digitvalue*c;
        }
        sum=sum+digitvalue;
    }
     if(sum==Num)
        {
            printf("Armstrong Number");
        }
        else
            printf("NOT Armstrong");
}
