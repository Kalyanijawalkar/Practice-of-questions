#include<stdio.h>

int main()
{
    char ch = '\0';

    printf("Enter the charcter : \n");
    scanf("%c",&ch);

    printf("ASCII value of the charcter in DECIMAL %d\n",ch);
    printf("ASCII value of the charcter in OCTAL is %o\n",ch);
    printf("ASCII value of the charcter in HEXADECIMAL is %x\n",ch);
}