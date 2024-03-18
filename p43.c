//Concatenate the given 2 Strings
#include<stdio.h>
int main()
{
    int k=0,j=0;
    printf("Enter first String size:\n");
    int size1,size2;
    scanf("%d",&size1);
    printf("Enter Second String size:\n");
    scanf("%d",&size2);
    char ArrayS1[size1],ArrayS2[size2],ArrayS3[size1+size2];
    scanf("%s",ArrayS1);
    scanf("%s",ArrayS2);
    for(int i=0;ArrayS1[i]!=0;i++)
    {
        ArrayS3[i]=ArrayS1[i];
        k++;
        //printf("%d\n",k);
    }
    for(int j=0;ArrayS2[j]!=0;j++)
    {
        ArrayS3[k]=ArrayS2[j];
        k++;
        //printf("%d\n",k);
    }
    printf("concetinate string is %s",ArrayS3);

}
