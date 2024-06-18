// Problem Statement : Aceept two values from user and perform the addition.

// Step 1 : Understand the Problem statement
// Conclusion : We have to accept 2 intergers and perform the addtion.

// Step 2 : Write the algorithm
/*
   START
        Accept first number from user and store it into no1
        Accept second number from user and store it into no2
        Create one variable to store the result name as Ans
        Perform Addition of no1 and no2, store the result in Ans
        Display the result from Ans to the user
   STOP
*/

// Step 3: Decide the programming language (C/C++/Java)
// We select C programming

// Step 4: Write the program 

#include<stdio.h>

int main()
{
    int i, j, k;
    printf("Enter first number : \n");
    scanf("%d",&i);

    printf("Enter second number : \n");
    scanf("%d",&j);

    k = i + j;

    printf("Addition is : %d\n",k);

    return 0;
}