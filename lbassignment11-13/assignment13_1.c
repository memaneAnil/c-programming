#include<stdio.h>

int cntEvenDigit(int iNo)
{
    int iCnt=0;
    int digit=0;
    while(iNo!=0)
    {
        digit=iNo%10;
        if(digit%2==0)
        {
            iCnt++;
        }
        iNo=iNo/10;
    }
    return iCnt;
}

int main()
{
    int iValue=0,iRet=0;

    printf("Enter the number\n");
    scanf("%d",&iValue);

    iRet=cntEvenDigit(iValue);

    printf("Even digit count is : %d\n",iRet);
    return 0;
}