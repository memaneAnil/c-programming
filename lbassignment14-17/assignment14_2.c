#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[],int iSize)
{
    int iCnt=0,iEvenSum=0,iOddSum=0;
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        if(Arr[iCnt]%5==0)
        {
            printf("Number divisible by 5 :%d\n",Arr[iCnt]);
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

    Display(ptr,iLength);
    
    free(ptr);
    
    return 0;

}