#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
bool Check(int Arr[],int iSize,int iNo)
{
    int iCnt=0;
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        if(Arr[iCnt]==iNo)
        {
           break;
        }
   
    }
    if(iCnt==iSize)
    {
        return false;
    }
    else
    {
        return true;
    }
}

int main()
{
    int *ptr=NULL;
    int iLength=0;
    int iCnt=0;
    bool bRet=0;
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

    bRet=Check(ptr,iLength,iValue);
    
   if(bRet==true)
   {
        printf("Number is present\n");
   }
   else
   {
        printf("Number is not present\n");
   }
   

    free(ptr);
    
    return 0;
}