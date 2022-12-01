#include<stdio.h>
#include<stdlib.h>

int LastOcc(int Arr[],int iSize,int iNo)
{
    int iCnt=0;
    for(iCnt=iSize;iCnt>0;iCnt--)
    {
        if(Arr[iCnt]==iNo)
        {
           break;
        }
   
    }
    if(iCnt==iSize)
    {
        return -1;
    }
    else
    {
        return iCnt;
    }
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

    printf("Enter the number to search\n");
    scanf("%d",&iValue);

    iRet=LastOcc(ptr,iLength,iValue);

    if(iRet==-1)
    {
        printf("There is no such number\n");
    }
    else
    {
        printf("last occurance of number is : %d\n",iRet);
    }
    
    free(ptr);
    
    return 0;
}
















/*
int LastOcc2(int Arr[],int iSize,int iNo)
{
    int iCnt=0,iTemp=0;
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        if(Arr[iCnt]==iNo)
        {
          iTemp=iCnt;
        }
   
    }
    if(iTemp==0)
    {
        return -1;
    }
    else
    {
        return iTemp;
    }
}
*/