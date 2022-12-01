#include<stdio.h>

int countFour(int iNo)
{
    int digit=0,iCnt=0;

    
    while(iNo!=0)
    {
        digit=iNo%10;
        if(digit==4)
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

    iRet=countFour(iValue);
    printf("frequency of four is :%d \n",iRet);
    
    return 0;
}