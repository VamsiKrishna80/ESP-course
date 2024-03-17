/*
 Expected outPut
5 4 3 2 1 2 3 4 5
  4 3 2 1 2 3 4
    3 2 1 2 3
      2 1 2
        1
*/
#include<stdio.h>
int main()
{
    for(int row=5;row>=1;row--)
    {
        for(int column=5;column>=1;column--)
        {
           if(row<column)
           {
               printf("  ");
           }
           else
             printf("%d ",column);
        }
        for(int column=2;column<=row;column++)
        {
            printf("%d ",column);
        }
        printf("\n");
    }
}
