/*
Expected Output:
# # # # #
# @ @ @ #
# @ @ @ #
# @ @ @ #
# # # # #
*/
#include<stdio.h>
int main()
{
    for(int row=1;row<=5;row++)
    {
        for(int column=1;column<=5;column++)
        {
            if(row==1||row==5||column==1||column==5)
            {
                printf("# ");
            }
            else
                printf("@ ");
        }
        printf("\n");
    }
}
