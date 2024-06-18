#include<stdio.h>
#include<stdlib.h>

float Average(int Arr[], int iSize)
{
   int iCnt = 0, iSum = 0;
   float fAverage = 0.0f;

   for(iCnt = 0; iCnt < iSize; iCnt++)
   {
        iSum = iSum + Arr[iCnt];
   }
   fAverage = ((float)iSum/(float)iSize);
   return fAverage;
}

int main()
{
    int iCount = 0, iCnt = 0, fRet = 0;
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

    fRet = Average(ptr,iCount);

    printf("Average : %d\n",fRet);

    free(ptr);
    printf("Dynamic memory gets deallocated succesfully...\n");
    return 0;
}