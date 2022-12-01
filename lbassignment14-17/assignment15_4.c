#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[],int iSize)
{
    int iCnt=0,iCounter=0;
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        if(Arr[iCnt]==11)
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

    iRet=Frequency(ptr,iLength);
    
    printf("Frequency of 11 is :%d\n",iRet);

    free(ptr);
    
    return 0;
}