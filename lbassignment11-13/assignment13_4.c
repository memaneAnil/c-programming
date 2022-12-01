#include<stdio.h>

int MultOfDigit(int iNo)
{
    int iAns=1;
    int digit=0;
    while(iNo!=0)
    {
        digit=iNo%10;
        
        if(digit!=0)
        {
            iAns=iAns*digit;
        }
        
        iNo=iNo/10;
    }
    return iAns;
}

int main()
{
    int iValue=0,iRet=0;

    printf("Enter the number\n");
    scanf("%d",&iValue);

    iRet=MultOfDigit(iValue);

    printf("Multification of digit is : %d\n",iRet);
    return 0;
}