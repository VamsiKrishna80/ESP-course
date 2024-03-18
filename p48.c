/*
Question: Get a number up to 50 digits and reverse it.

E.g.: 12345678912345
Answer: 54321987654321
*/
#include<stdio.h>
int main()
{
    char StringNum[50],j=0;
    scanf("%s",StringNum);
    for(int i=0;StringNum[i]!=0;i++)
    {
        j=j+1;
    }
    //printf("%d",j);
   for(int i=j-1;i>=0;i--)
    {
       printf("%c",StringNum[i]);
    }
    return 0;
}
