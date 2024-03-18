/*
Question: Add two integer arrays of up to 50 digits and
store the result in a 51 digits array.
*/
#include<stdio.h>
int main()
{
    printf("Enter size1 of Array1:\n");
    int size1;
    scanf("%d",&size1);
    int Array1[size1];
    for(int i=0;i<size1;i++)
    {
        scanf("%d",&Array1[i]);
    }
    printf("Enter size2 of Array2:\n");
    int size2;
    scanf("%d",&size2);
    int Array2[size2];
    for(int i=0;i<size2;i++)
    {
        scanf("%d",&Array2[i]);
    }
    int Array3[51];
    int size3=size1,carry=0,Sum=0,Sum1=0;;
    for(int i=size3;i>=0;i--)
    {
        Sum=0;
        Sum=Array1[size1-1]+Array2[size2-1]+carry;
        if(Sum>9)
        {
            carry=Sum/10;
            Sum1=Sum%10;
            Sum=0;
        }
        else
        {
            carry=0;
            Sum1=0;
        }
        Array3[i]=Sum1+Sum;
        size1--;
        size2--;
    }
    printf(" Total :\n");
    for(int i=0;i<=size3;i++)
    {
        printf("%d ",Array3[i]);
    }

}
