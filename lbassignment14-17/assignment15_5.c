#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[],int iSize,int iNo)
{
    int iCnt=0,iCounter=0;
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        if(Arr[iCnt]==iNo)
        {
            iCounter++;
        }
   
    }
    return iCounter;

}

int main()
{
    int *ptr=NULL;
    int iLength=0;
    int iCnt=0;
    int iRet=0;
    int iValue=0;

    printf("Enter the number of elements\n");
    scanf("%d",&iLength);

    ptr=(int *)malloc(iLength*sizeof(int));

    if(ptr==NULL)
    {
        printf("Unable to allocate memory\n");
        return -1;
    }

    printf("Enter the numbers\n");

    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    printf("Enter number to search in array\n");
    scanf("%d",&iValue);

    iRet=Frequency(ptr,iLength,iValue);
    
    printf("Frequency of %d is :%d\n",iValue,iRet);

    free(ptr);
    
    return 0;
}