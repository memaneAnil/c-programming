#include<stdio.h>
#include<stdlib.h>

void Range(int Arr[],int iSize,int iNo1,int iNo2)
{
    int iCnt=0;
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        if(Arr[iCnt]>=iNo1 && Arr[iCnt]<=iNo2)
        {
           printf("%d\t",Arr[iCnt]);
        }
   
    }
    printf("\n");
    
}

int main()
{
    int *ptr=NULL;
    int iLength=0;
    int iCnt=0;
    
    int iValue1=0,iValue2=0;

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

    printf("Enter the first number\n");
    scanf("%d",&iValue1);

    printf("Enter the second number\n");
    scanf("%d",&iValue2);


    Range(ptr,iLength,iValue1,iValue2);
    
    free(ptr);
    
    return 0;
}
















