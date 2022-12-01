#include<stdio.h>
#include<stdlib.h>

void Digits(int Arr[],int iSize)
{
    int iCnt=0,iCount=0,iDigit=0,iTemp=0;
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        iCount=0;
        iTemp=Arr[iCnt];
        while(Arr[iCnt]!=0)
        {
            iDigit=Arr[iCnt]%10;
            iCount++;
            Arr[iCnt]=Arr[iCnt]/10;
        }
        if(iCount==3)
        {
            printf("3 digit no is: %d\n",iTemp);
        }
    }

}

int main()
{
    int *ptr=NULL;
    int iLength=0;
    int iCnt=0;
    

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

    Digits(ptr,iLength);

    free(ptr);
    
    return 0;
}