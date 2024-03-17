//WAP to print the week day of a given date in march 2024 'note:15-3-2024 is Friday'
// logic  date 15%7=1 so that
/*
   Friday = 1
   saturday = 2
   sunday=3
   monday = 4
   tuesday = 5
   wednesday = 6;
   thursday = 0
   */
   #include<stdio.h>
   int main()
   {
       int date,temp;
        printf("Enter day:\n");
       scanf("%d",&date);
       temp=date%7;
       switch(temp)
       {
       case 1:
           printf("DATE is Friday");
           break;
       case 2:
           printf("DATE is Saturday");
           break;
       case 3:
           printf("DATE is Sunday");
           break;
       case 4:
           printf("DATE is Monday");
           break;
       case 5:
           printf("DATE is Tuesday");
           break;
       case 6:
           printf("DATE is Wednesday");
           break;
       case 0:
           printf("DATE is Thursday");
           break;
       }
   }
