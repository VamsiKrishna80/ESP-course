/*
EXpected Output;
1
2 3
3 4 5
4 5 6 7
5 6 7 8 9
*/

#include<stdio.h>
int main()
{
    int a=1;
    for(int i=1;i<=5;i++)
    {

        for(int j=i;j<=2*i-1;j++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
}
