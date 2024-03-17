/*
EXpected output
1 2 3 4 5
6 7 8 9 10
11 12 13 14 15
16 17 18 19 20
21 22 23 24 25
*/

#include<stdio.h>
int main()
{   int k=0,a=1;
    for(int i=1;i<=5;i++)
    {
        for(int j=a;j<=(a+4);j++)
        {
         printf("%d ",j);
         k++;
        }
        a=k+1;
        printf("\n");
    }
}
