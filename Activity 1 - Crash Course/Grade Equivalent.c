#include <stdio.h>
int main ()
{
   int grade;

   printf("Enter your Grade:");
   scanf("%d", & grade);

if(grade >= 90 && grade <= 100)
   {
printf("Your letter grade is a");
   }
else if(grade >= 80 && grade <= 90)
   {
   printf("Your letter grade is a-");
   }
else if(grade >= 70 && grade <= 80)
   {
   printf("Your letter grade is b");
   }
else if(grade >= 60 && grade <= 70)
   {
   printf("Your grade letter is b-");
   }
else if(grade >= 50 && grade <= 60)
   {
   printf("Your letter grade is c");
   }
else if(grade >= 40 && grade <= 50)
   {
   printf("Your letter grade is d");
   }
else if(grade >= 1 && grade <=40 )
   {
   printf("Your letter grade is d");
   }
else
   {
   printf("Invalid input! Try again");
   }
return 0;
}