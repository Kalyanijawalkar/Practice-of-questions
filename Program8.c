// Problem Statement : Accept radius from user and calculte the area of circle

// Step 1 : Understand the problem statement
// Conclusion : We are going to use the formula as PI*R*R

// Step 2 : Algorithm
/*
    START
        Aceept radius from user and store into RADIUS
        Create variable as PI and store value 3.14
        Calculate area PI * RADIUS * RADIUS
        Display the value of Area to the user
    STOP
*/


#include<stdio.h>

//////////////////////////////////////////////////////////////////////
//
// Function name :   CalulateArea
// Description :     It is used to calculate area of circle
// Input :           Float
// Output :          Float
// Auther name :     Kalyani Santosh Jawalkar
// Date:             02/10/2023
//
//////////////////////////////////////////////////////////////////////

float CalculateArea(float fValue)
{
    auto float fAns = 0.0f;
    auto float PI = 3.14f;

    fAns = PI * fValue * fValue;
    return fAns;
}

/////////////////////////////////////////////////////////////////////
//
// Entry Point function
//
/////////////////////////////////////////////////////////////////////
int main()
{
    auto float fRadius = 0.0f;
    auto float fArea = 0.0f;

    printf("Enter the radius of circle : \n");
    scanf("%f",&fRadius);

    fArea = CalculateArea(fRadius);

    printf("ARea of circle is : %f\n",fArea);

    return 0;
}