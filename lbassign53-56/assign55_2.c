#include<stdio.h>

int DigitSum(int No)
{
    static int iDigit=0;
    static int iSum=0;

    if(No!=0)
    {
        iDigit=No%10;
        iSum=iSum+iDigit;
        No=No/10;
        DigitSum(No);
    }

    return iSum;
}

int main()
{
    int Value=0;
    int iRet=0;

    printf("Please enter the number\n");
    scanf("%d",&Value);
    iRet=DigitSum(Value);
    printf("Addition of digit is : %d\n",iRet);

    return 0;
}