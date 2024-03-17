/*
expected output
12345
 2345
  345
   45
    5
*/

#include<stdio.h>
int main()
{
    for(int row=1;row<=5;row++)
    {
        for(int column=1;column<=5;column++)
        {
           if(row>column)
           {
               printf(" ");
           }
           else
             printf("%d",column);
        }
        printf("\n");
    }
}
