#include<stdio.h>

void DisplayExamTime(int iStandard)
{
   if(iStandard == 1)
   {
        printf("Your exam at 8am\n");
   }
   else if(iStandard == 2)
   {
         printf("Your exam at 9am\n");
   }
   else if(iStandard == 3)
   {
        printf("Your exam at 10am\n");
   }
   else if(iStandard == 4)
   {
         printf("Your exam at 11am\n");
   }
   else if(iStandard == 5)
   {
         printf("Your exam at 12 NOON\n");
   }
   else
   {
        printf("Invalid input..\n");
   }
}

int main()
{
    auto int iValue = 0;

    printf("Enter your standard : \n");
    scanf("%d",&iValue);

    DisplayExamTime(iValue);

    return 0;
}