/*
expected output
1 1 1 1
2 2 2 2
3 3 3 3
4 4 4 4
5 5 5 5
*/
#include<stdio.h>
int main()
{
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=4;j++)
        {
            printf("%d ",i);
        }
        printf("\n");
    }
}

