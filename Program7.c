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

/////////////////////////////////////////////////////////////////////
//
// Function Name : Addition
// Description : It is used to perform addition of two integers
// Input arguments : Integer, Integer
// Output : Integer
// Author : Kalyani Santosh Jawalkar
// Date : 25/09/2023
//
//////////////////////////////////////////////////////////////////////

int Addition(int iNo1, int iNo2)
{
    int iSum = 0;    // Varible to store the value of addtion
    iSum = iNo1 + iNo2;
    return iSum;
}

///////////////////////////////////////////////////////////////////////
//
// Entry Point function of an application which performs addition of 2 integers
//
//////////////////////////////////////////////////////////////////////

int main()
{
    auto int iValue1 = 0;  // Variable to store first input
    auto int iValue2 = 0;  // Variable to store second input
    auto int iAns = 0;     // Variable to store result

    printf("Enter first number : \n");
    scanf("%d",&iValue1);

    printf("Enter second number : \n");
    scanf("%d",&iValue2);

    iAns = Addition(iValue1, iValue2);  //Function call to perform addition

    printf("Addition is : %d\n",iAns);
    return 0;
}

// Step 5 : Test the code
/*
Test case 1 :
Inuput : 10 11
Output : 21

Test case 2 :
Inuput : 10 0
Output : 10

Test case 3 :
Inuput : 12 -6
Output : 6

Test case 4 :
Inuput : -6  -5
Output : -11
*/