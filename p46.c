/*Question: Get a String of numbers up to 50 digits and validate the number.

E.g.: 1234567 → valid number
12abc35 → Not a valid number
*/
#include<stdio.h>
int main()
{
    char stringNum[50],got=0;
    scanf("%s",stringNum);
    for(int i=0;stringNum[i]!=0;i++)
    {
        if(stringNum[i]>=48&&stringNum[i]<=57)
        {
            continue;
        }
        else
        {
            got=1;
        }
    }
    if(got==1)
        {
            printf("NOT a Valid Number");
        }
    else
        printf("Valid Number");
}
