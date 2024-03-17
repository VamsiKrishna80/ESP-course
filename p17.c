/*
Expected output
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
*/

#include<stdio.h>
int main()
{
    for(int i=1;i<=4;i++)
    {
        for(int j=1;j<=5;j++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
}
