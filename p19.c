/*
EXPECTED OUPUT:
1 2 3 4 5
2 3 4 5 6
3 4 5 6 7
4 5 6 7 8
5 6 7 8 9
*/
#include<stdio.h>
int main()
{
    for(int i=1;i<=5;i++)
    {
        for(int j=i;j<=i+4;j++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
}
