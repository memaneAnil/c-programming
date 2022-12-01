#include<stdio.h>
#include<stdlib.h>

int Maximum(int Arr[],int iSize)
{
    int iCnt=0,iMax=0;
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        if(Arr[iCnt]>iMax)
        {
           iMax=Arr[iCnt];
        }
   
    }
    return iMax;

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

    iRet=Maximum(ptr,iLength);
    
    printf("Maximum number is :%d\n",iRet);

    free(ptr);
    
    return 0;
}