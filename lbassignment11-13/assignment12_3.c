#include<stdio.h>

int countTwo(int iNo)
{
    int digit=0,iCnt=0;

    
    while(iNo!=0)
    {
        digit=iNo%10;
        if(digit==2)
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

    iRet=countTwo(iValue);
    printf("frequency of two is :%d \n",iRet);
    
    return 0;
}