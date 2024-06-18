#include<stdio.h>
#include<stdbool.h>

void DisplayFactors(int iNo)
{
    if((iNo % 1) == 0)
    {   printf("1");}
}


int main()
{
    int iValue = 0;

    printf("Enter the number : \n");
    scanf("%d",&iValue);

    DisplayFactors(iValue);
   
    return 0;
}