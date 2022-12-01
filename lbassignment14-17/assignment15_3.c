#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool Check(int Arr[],int iSize)
{
    int iCnt=0;
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        if(Arr[iCnt]==11)
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
    bool bRet=false;

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

    bRet=Check(ptr,iLength);

    if(bRet==true)
    {
        printf("11 is present\n");
    }
    else
    {
        printf("11 is absent\n");
    }
      
    free(ptr);
    
    return 0;
}