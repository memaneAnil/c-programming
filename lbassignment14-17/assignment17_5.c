#include<stdio.h>
#include<stdlib.h>

void DigitsSum(int Arr[],int iSize)
{
    int iCnt=0,iSum=0,iDigit=0,iTemp=0;
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        iSum=0;   
        while(Arr[iCnt]!=0)
        {
            iDigit=Arr[iCnt]%10;
            iSum=iSum+iDigit;
            Arr[iCnt]=Arr[iCnt]/10;
        }
        printf("Addition of digit is: %d\n",iSum);
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

    DigitsSum(ptr,iLength);

    free(ptr);
    
    return 0;
}