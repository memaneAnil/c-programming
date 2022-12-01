#include<stdio.h>

int countDiff(int iNo)
{
    int iEven=0,iOdd=0;
    int digit=0;
    while(iNo!=0)
    {
        digit=iNo%10;
        
        if(digit%2==0)
        {
            iEven=iEven+digit;
        }
        else
        {
            iOdd=iOdd+digit;
        }
        
        iNo=iNo/10;
    }
    return (iEven-iOdd);
}

int main()
{
    int iValue=0,iRet=0;

    printf("Enter the number\n");
    scanf("%d",&iValue);

    iRet=countDiff(iValue);

    printf("Result is : %d\n",iRet);
    return 0;
}