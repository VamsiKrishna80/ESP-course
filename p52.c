/*
Question: Convert an integer array of up to 50 digits to character array and print

using print using “printf(“%s”, ....);”
E.g.: Array – 1 4 5 8 7 6 3
Answer: 1458763
*/
#include<stdio.h>
int main()
{
    int Array1[7]={1,4,5,8,7,6,3};
    char Array2[7];
    for(int i=0;i<7;i++)
    {
        Array2[i]=Array1[i]+48;
    }
    for(int i=0;i<7;i++)
    {
        printf("%c",Array2[i]);
    }
}
