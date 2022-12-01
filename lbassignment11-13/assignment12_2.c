#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL chkZero(int iNo)
{
    int digit=0;
    BOOL Flag=FALSE;
  
    while(iNo!=0)
    {
        digit=iNo%10;
        if(digit==0)
        {
            Flag=TRUE;
            break;
        }
        iNo=iNo/10;
    }
    return Flag;
}

int main()
{
    int iValue=0;
    BOOL bRet=FALSE;

    printf("Enter the number\n");
    scanf("%d",&iValue);

    bRet=chkZero(iValue);

    if(bRet==TRUE)
    {
        printf("It contain zero\n");
    }
    else
    {
        printf("There is no zero\n");
    }
    
    return 0;
}