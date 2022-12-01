#include<stdio.h>

int count(int iNo)
{
    int digit=0,iCnt=0;

    
    while(iNo!=0)
    {
        digit=iNo%10;
        if(digit<6)
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

    iRet=count(iValue);
    printf("frequency of four is :%d \n",iRet);
    
    return 0;
}