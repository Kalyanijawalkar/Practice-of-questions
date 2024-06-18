#include<stdio.h>
#include<stdlib.h>

int OddCount(int Arr[], int iSize)
{
    int iCnt = 0;
    int iOddCnt = 0;
    
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if((Arr[iCnt] % 2) != 0)
        {
            iOddCnt++;
        }
    }
    return iOddCnt;    
}

int main()
{
    int iCount = 0, iCnt = 0, iRet = 0;
    int *ptr = NULL;

    printf("Enter the number of elements that you want to enter : \n");
    scanf("%d",&iCount);

    ptr = (int *)malloc(iCount * sizeof(int));

    printf("Dynamic meomry geta allocated scuuessfully for %d elemnts\n",iCount);

    printf("Enter the %d values : \n");
    for(iCnt = 0; iCnt < iCount; iCnt++)
    {
        printf("\n Enter the element no %d : ",iCnt+1);
        scanf("%d",&ptr[iCnt]);
    }

    iRet = OddCount(ptr,iCount);

    printf("Number of odd elemnts are : %d\n",iRet);

    free(ptr);
    printf("Dynamic memory gets deallocated succesfully...\n");

    return 0;
}