#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[], int iSize, int iNo)
{
    int iCnt = 0;
    int iFrequency = 0;
    
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            iFrequency++;
        }
    }
    return iFrequency;
}

int main()
{
    int iCount = 0, iCnt = 0, iRet = 0, iValue = 0;
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

    printf("Enter the element that you want to serach :  \n");
    scanf("%d",&iValue);

    iRet = Frequency(ptr,iCount,iValue);
    printf("%d occurs %d times\n",iValue,iRet);

    free(ptr);
    printf("Dynamic memory gets deallocated succesfully...\n");
    return 0;
}