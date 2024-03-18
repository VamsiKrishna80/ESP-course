/*
Question: Get a string of numbers up to 50 digits and remove all leading zeros.

E.g.: 00000012345
Answer: 12345
*/
#include<stdio.h>
int main()
{
    int j=0;
    char StringNum1[50];
    char StringNum2[50];
    scanf("%s",StringNum1);
    for(int i=0;StringNum1[i]!=0;i++)
    {
        if(StringNum1[i]>48 && StringNum1[i]<=57)
        {
            StringNum2[j]=StringNum1[i];
            j++;
        }
    }
    printf("%s",StringNum2);
}
