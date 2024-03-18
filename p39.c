//Reverse a string
#include<stdio.h>
void main()
{
    int size,copySize;
    char temp;
    scanf("%d",&size);
   char ArrayS[size];
   scanf("%s",ArrayS);
   copySize=size-1;
   for(int i=0;i<(size)/2;i++)
   {
       temp=ArrayS[i];
       ArrayS[i]=ArrayS[copySize];
       ArrayS[copySize]=temp;
       copySize--;
   }
   printf("%s",ArrayS);
}
